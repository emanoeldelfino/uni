#include <stdio.h>

int main() {
    float x;
    float y;

    printf("\nX coordinate: ");
    scanf("%f", &x);

    printf("Y coordinate: ");
    scanf("%f", &y);

    printf("\n");

    if(x == 0 && y == 0) {
        printf("Origin");
    } else if (x == 0 && y != 0) {
        printf("Y axis");
    } else if (x != 0 && y == 0) {
        printf("X axis");
    } else if (x > 0 && y > 0) {
        printf("Quadrant 1");
    } else if (x < 0 && y > 0) {
        printf("Quadrant 2");
    } else if (x < 0 && y < 0) {
        printf("Quadrant 3");
    } else if (x > 0 && y < 0) {
        printf("Quadrant 4");
    } else {
        printf("Something went wrong...");
    }

    printf("\n\n");
}

