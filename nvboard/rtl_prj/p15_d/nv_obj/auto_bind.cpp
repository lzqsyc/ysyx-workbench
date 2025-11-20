#include <nvboard.h>
#include "Vregister.h"

void nvboard_bind_all_pins(Vregister* top) {
	nvboard_bind_pin( &top->en, 1, BTNC);
	nvboard_bind_pin( &top->rst, 1, BTNL);
	nvboard_bind_pin( &top->set, 1, BTNU);
	nvboard_bind_pin( &top->d, 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->q, 8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
}
