#include <stdio.h>

int main(int argc, char *argv[]) {
    int pA, pB;
    float grA, grB;

    printf("\nEnter city A population and its growth rate: ");
    scanf("%d %f", &pA, &grA);

    do {
        printf("\nEnter city B population and its growth rate: ");
        scanf("%d %f", &pB, &grB);

        if (pB <= pA) 
            printf("\nInvalid population %d. It should be larger than city A %f.", pB, pA);
        if (grB >= grA) 
            printf("\nInvalid growth rate %d. It should be less than the city A %f.", grB, grA);
    } while (pB <= pA || grB >= grA);

    int cpA = pA, cpB = pB;
    int y = 0;
    while (cpA < cpB) {
        cpA += cpA * (grA / 100);
        cpB += cpB * (grB / 100);
        y++;
    }

    printf("\nIt'll take %d years for city A surpass city B population.", y);
    printf("\n\nCity A will go from %d population to %d.", pA, cpA);
    printf("\nCity B will go from %d population to %d.\n\n", pB, cpB);
}

