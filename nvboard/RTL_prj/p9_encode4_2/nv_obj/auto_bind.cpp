#include <nvboard.h>
#include "Vencode4_2.h"

void nvboard_bind_all_pins(Vencode4_2* top) {
	nvboard_bind_pin( &top->en, 1, BTNC);
	nvboard_bind_pin( &top->x, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->y, 2, LD1, LD0);
}
