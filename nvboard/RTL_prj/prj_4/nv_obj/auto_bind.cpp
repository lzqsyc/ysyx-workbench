#include <nvboard.h>
#include "Vmux2_1.h"

void nvboard_bind_all_pins(Vmux2_1* top) {
	nvboard_bind_pin( &top->a, 1, SW0);
	nvboard_bind_pin( &top->b, 1, SW1);
	nvboard_bind_pin( &top->s, 1, BTNC);
	nvboard_bind_pin( &top->y, 1, LD0);
}
