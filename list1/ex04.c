#include <stdio.h>
int main() {
    int initial_speed_m_s;
    int acceleration;
    float time_seconds;
    float velocity;

    printf("\nInitial speed in m/s: ");
    scanf("%d", &initial_speed_m_s);

    printf("Acceleration in m/s²: ");
    scanf("%d", &acceleration);

    printf("Time in seconds: ");
    scanf("%f", &time_seconds);

    // calculating
    velocity = initial_speed_m_s + (acceleration * time_seconds);

    printf("\nThe velocity is %.0f m/s.\n\n", velocity);

    return 0; 
}

