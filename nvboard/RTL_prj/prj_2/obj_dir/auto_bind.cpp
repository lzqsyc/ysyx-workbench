#include <nvboard.h>
#include "Vtest.h"

void nvboard_bind_all_pins(Vtest* top) {
	nvboard_bind_pin( &top->a, 1, SW0);
	nvboard_bind_pin( &top->b, 1, SW1);
	nvboard_bind_pin( &top->f, 1, LD0);
}
