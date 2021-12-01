#include <stdio.h>
#include <math.h>

int main() {
    int bulb_power_w;
    float room_length_m;
    float room_width_m;

    printf("\nBulb power (W): ");
    scanf("%d", &bulb_power_w);

    printf("Room length (m): ");
    scanf("%f", &room_length_m);
    
    printf("Room width (m): ");
    scanf("%f", &room_width_m);

    float room_area_m = room_length_m * room_width_m;

    // Considering the necessary power is 18W/m²
    float total_power_w = room_area_m * 18;

    float calc = total_power_w / bulb_power_w;
    calc = isfinite(calc) && calc > 0 ? calc : 0.0;

    int needed_bulbs = calc >= 1 ? round(calc) : ceil(calc);

    printf("\nNumber of bulbs needed to light the room is %d.\n\n", needed_bulbs);
}

