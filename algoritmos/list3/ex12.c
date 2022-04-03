#include <stdio.h>

int main(int argc, char *argv[]) {
    int pop1 = 0, pop2 = 0;
    float rate1 = 0, rate2 = 0;
    int popA, popB;
    float rateA, rateB;

    char city1, city2;

    do {
        printf("\nEnter city A population and its growth rate: ");
        scanf("%d %f", &popA, &rateA);

        printf("\nEnter city B population and its growth rate: ");
        scanf("%d %f", &popB, &rateB);

        if (popA < popB && rateA > rateB) {
            pop1 = popA;
            pop2 = popB;
            rate1 = rateA;
            rate2 = rateB;
            city1 = 'A';
            city2 = 'B';
        } else if (popA > popB && rateA < rateB) {
            pop1 = popB;
            pop2 = popA;
            rate1 = rateB;
            rate2 = rateA;
            city1 = 'B';
            city2 = 'A';
        }

        if (rate1 == 0) {
            printf("\nPopulation and growth rates must be different.");
            printf("\nIf population of A is less than B, growth");
            printf("rate of A must be greater than B.");
            printf("\nOtherwise if population of A is greater than B, growth");
            printf("rate of A must be less than B.");
        }
    } while (rate1 == 0);

    int pop1c = pop1, pop2c = pop2;
    int y;
    for (y = 0; pop1c < pop2c; y++) {
        pop1c += pop1c * (rate1 / 100);
        pop2c += pop2c * (rate2 / 100);
    }

    printf("\nIt'll take %d years for city %c surpass city %c population.", y, city1, city2);
    printf("\n\nCity %c will go from %d population to %d.", city1, pop1, pop1c);
    printf("\nCity %c will go from %d population to %d.\n\n", city2, pop2, pop2c);
}

