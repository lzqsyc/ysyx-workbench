#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vlight.h"
#include <cassert>
#include <cstdio>

// 统一的仿真时间（任意单位），用于波形打点
static vluint64_t sim_time = 0;

// 一个“小步进器”：半个周期 dump 一次，形成 0->1->0 的完整上升沿与下降沿
static void tick(Vlight* top, VerilatedVcdC* tfp) {
    // 低电平
    top->clk = 0;
    top->eval();
    tfp->dump(sim_time++);

    // 上升沿（时序逻辑在这里采样）
    top->clk = 1;
    top->eval();
    tfp->dump(sim_time++);

    // 回到低电平
    top->clk = 0;
    top->eval();
    tfp->dump(sim_time++);
}

int main(int argc, char** argv) {
    // 1) 解析命令行、开启全局波形
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // 2) 实例化 DUT
    Vlight* top = new Vlight;

    // 3) 建立并打开 VCD
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, /*levels*/ 1);
    tfp->open("light.vcd");

    // 4) 上电初值
    top->clk = 0;
    top->rst = 1;     // 先保持复位
    top->eval();
    tfp->dump(sim_time++);

    // 5) 复位保持 2 个周期，期间 led 应被置为 1
    tick(top, tfp);   // 周期 1（posedge 时 led<=1, count<=0）
    tick(top, tfp);   // 周期 2（保持）

    // 断言复位态的 led
    std::printf("[RST] led = 0x%04x (expect 0x0001)\n", top->led);
    assert(top->led == 0x0001);

    // 6) 释放复位
    top->rst = 0;
    top->eval();
    tfp->dump(sim_time++);

    // 关键点：复位释放后的**第一个上升沿**，因为 count==0，会触发环移
    tick(top, tfp);   // 周期 3：发生 led 环移 0001 -> 0002

    std::printf("[RUN] led after first rotate = 0x%04x (expect 0x0002)\n", top->led);
    assert(top->led == 0x0002);

    // 7) 再跑若干周期（由于需要 5,000,001 个周期才再次旋转，我们这里只验证保持）
    for (int i = 0; i < 5; ++i) tick(top, tfp);
    std::printf("[RUN] led stays = 0x%04x (expect 0x0002)\n", top->led);
    assert(top->led == 0x0002);

    // 8) 收尾
    tfp->close();
    top->final();
    delete tfp;
    delete top;

    std::puts("All checks passed. VCD saved to wave.vcd");
    return 0;
}
