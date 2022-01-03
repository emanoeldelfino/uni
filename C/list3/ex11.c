#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int pA = 90000, pB = 200000;
    float grA = 3, grB = 1.5;

    int cpA = pA, cpB = pB;

    int y = 0;
    while (cpA < cpB) {
        //cpA += cpA * (grA / 100);
        //cpB += cpB * (grB / 100);
        cpA = pA * pow(1.03, y);
        cpB = pB * pow(1.015, y);
        y++;
    }

    printf("\nIt'll take %d years for city A surpass city B population.", y);
    printf("\n\nCity A will go from %d population to %d.", pA, cpA);
    printf("\nCity B will go from %d population to %d.\n\n", pB, cpB);
}

