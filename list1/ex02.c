#include <stdio.h>
#include <string.h>

int main() {
    char pilot_name[20];
    int distance_km;
    int time_hour;
    float speed_km_h;

    printf("\nEnter the name of the pilot: ");
    fgets(pilot_name, sizeof(pilot_name), stdin);

    // Remove new line character from pilot_name
    pilot_name[strcspn(pilot_name, "\n")] = 0;

    printf("Enter the distance ran in km: ");
    scanf("%d", &distance_km);

    printf("Enter the time ran in hours: ");
    scanf("%d", &time_hour);

    // calculating
    speed_km_h = distance_km / time_hour;

    printf("\nThe average speed of %s was %.2f km/h.\n", pilot_name, speed_km_h);
    return 0; 
}

