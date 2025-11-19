#include <nvboard.h>
#include "Vmux4_1.h"

void nvboard_bind_all_pins(Vmux4_1* top) {
	nvboard_bind_pin( &top->a, 4, BTNL, BTNU, BTND, BTNR);
	nvboard_bind_pin( &top->s, 2, SW1, SW0);
	nvboard_bind_pin( &top->y, 1, LD0);
}
