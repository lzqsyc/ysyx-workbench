#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <Vmux2_1.h>



static Vmux2_1 *dut = NULL;
static VerilatedVcdC *tfp = NULL;
static vluint64_t simu_time = 0;
double sc_time_stamp(){return simu_time;}

void verilator_init(){
   dut = new Vmux2_1;
   tfp = new VerilatedVcdC;
   Verilated::traceEverOn(true);
   dut->trace(tfp,99);
   tfp->open("mux2_1.fst");
}

int main(){
    printf("\n=== simulation start ====\n");


    while (1)
    {

    }
        
    dut->final();
    tfp->close();
    delete dut;
    delete tfp;
 
    printf("\n=== simulation over ====\n");
}