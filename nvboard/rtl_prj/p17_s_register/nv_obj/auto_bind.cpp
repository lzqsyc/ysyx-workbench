#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->mode, 3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->rst, 1, BTNC);
	nvboard_bind_pin( &top->data_in, 8, SW15, SW14, SW13, SW12, SW11, SW10, SW9, SW8);
	nvboard_bind_pin( &top->data_s, 1, BTNU);
	nvboard_bind_pin( &top->data_out, 8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
}
