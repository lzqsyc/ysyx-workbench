#include <nvboard.h>
#include <stdio.h>
#include <Vdecode2_4.h>

static Vdecode2_4 *dut = new Vdecode2_4;
void nvboard_bind_all_pins(Vdecode2_4 *top);

int main(){
    printf("=== simulation start ====\n");
    nvboard_bind_all_pins(dut);
    nvboard_init();
    int count = 0;
    int cycle_max = 100000;
    while (count < cycle_max)
    {
        for (int i = 0; i < 100000; i++){
            nvboard_update();
            dut->eval();
        }
        count++;
    }
    dut->final();
    delete dut;
    nvboard_quit();
    printf("=== simulation over ====\n");
    return 0;
}

