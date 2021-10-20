#include <stdio.h>
#include <math.h>

const double PI = acos(-1);

int main() {
    float water_tank_radius_m;
    int water_tank_height_m;
    float water_tank_volume_m;

    printf("\nWater tank radius in meters: ");
    scanf("%f", &water_tank_radius_m);

    printf("Height of water tank in meters: ");
    scanf("%d", &water_tank_height_m);

    water_tank_volume_m = PI * pow(water_tank_radius_m, 2) * water_tank_height_m;

    printf("\nThe water tank volume is %.2fm³.\n\n", water_tank_volume_m);
}

