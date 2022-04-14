#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float vi, a, t;

    printf("Initial speed (m/s): ");
    scanf("%f", &vi);

    printf("Acceleration (m/s²): ");
    scanf("%f", &a);

    printf("Time (s): ");
    scanf("%f", &t);

    float v = vi + a*t;

    printf("Final speed is %.2fm/s.\n", v);
}
