#include <nvboard.h>
#include "Vdecode2_4.h"

void nvboard_bind_all_pins(Vdecode2_4* top) {
	nvboard_bind_pin( &top->en, 1, BTNC);
	nvboard_bind_pin( &top->x, 2, SW1, SW0);
	nvboard_bind_pin( &top->y, 4, LD3, LD2, LD1, LD0);
}
