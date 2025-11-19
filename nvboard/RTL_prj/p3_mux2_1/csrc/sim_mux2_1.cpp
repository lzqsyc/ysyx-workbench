#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <Vmux2_1.h>
#include <assert.h>



static Vmux2_1 *dut = NULL;
static VerilatedVcdC *tfp = NULL;
static vluint64_t sim_time = 0;
double sc_time_stamp(){return sim_time;}

void verilator_init(){
   dut = new Vmux2_1;
   tfp = new VerilatedVcdC;
   Verilated::traceEverOn(true);
   dut->trace(tfp,99);
   tfp->open("mux2_1.vcd");
}

int main(){
    printf("\n=== simulation start ====\n");
    verilator_init();
    int count = 0;
    int cycle_max = 50;
    while (count < cycle_max)
    {
        int s =rand() & 1;
        int a =rand() & 1;
        int b =rand() & 1;
        dut->s = s;
        dut->a = a;
        dut->b = b;
        dut->eval();
        tfp->dump(sim_time);
        sim_time +=10;
        printf("s=%d,a=%d,b=%d,y=%d\n",dut->s,dut->a,dut->b,dut->y);
        assert(dut->y == (~s&a) | (s&b));
        count++;
    }
        
    dut->final();
    tfp->close();
    delete dut;
    delete tfp;
 
    printf("\n=== simulation over ====\n");
}