#include <stdio.h>
#include <nvboard.h>
#include <Vmux2_1.h>


static Vmux2_1 *dut = new Vmux2_1;
void nvboard_bind_all_pins(Vmux2_1 *top);

int main(){
    printf("\n=== simulation start ====\n");
    nvboard_bind_all_pins(dut);
    nvboard_init();

    while (1)
    {
        nvboard_update();
        dut->eval();
    }
    dut->final();
    delete dut;
    nvboard_quit();
    printf("\n=== simulation over ====\n");
}