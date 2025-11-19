#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <Vdecode2_4.h>

static Vdecode2_4 *dut = new Vdecode2_4;
static VerilatedVcdC *tfp = new VerilatedVcdC;
static vluint64_t sim_time = 0;
double sc_time_stamp(){return sim_time;}

void verilator_init(){
   dut = new Vdecode2_4;
   tfp = new VerilatedVcdC;
   Verilated::traceEverOn(true);
   dut->trace(tfp,99);
   tfp->open("decode2_4.vcd");
}

void verilator_quit(){
    dut->final();
    tfp->close();
    delete dut;
    delete tfp;
}

void dump_wave(){
    dut->eval();
    printf("Time: %lu, en=%d, x=%d, y=0x%x\n", sim_time, dut->en, dut->x, dut->y);
    sim_time +=10;
    tfp->dump(sim_time);
}

int main (){
    printf("\n=== simulation start ====\n");
    verilator_init();
    for (int i = 0;  i< 6; i++)
    {   
        if (i==0)
        {
            dut->en=0;dut->x=0b00;dump_wave();
        }
        if(i !=0){
            dut->en = 1;
            switch (i)
            {
            case 1:
                dut->x=0b00;dump_wave();
                break;
            case 2:
                dut->x=0b01;dump_wave();
                break;
            case 3: 
                dut->x=0b10;dump_wave();
                break;
            case 4:
                dut->x=0b11;dump_wave();
                break;
            case 5:
                dut->en=0;dump_wave();
                break;
            default:
                break;
            }
        }
        
    }
    printf("=== simulation over ====\n");
    verilator_quit();
}
        

    
