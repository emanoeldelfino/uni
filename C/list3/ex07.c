#include <stdio.h>

int main(int argc, char *argv[]) {
    int n, v, arit_sum = 0;
    float har_sum = 0.0;

    do {
        printf("\nNumber: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 0; i < n; i++) {
        do {
            printf("\nEnter number %d: ", i+1);
            scanf("%d", &v); 
        } while (v <= 0);

        arit_sum += v;
        har_sum += (float)1/v;
    }

    float arit_mean = (float)arit_sum / n;
    float har_mean = n / har_sum;

    printf("\nArithmetic mean: %.2f.", arit_mean);
    printf("\nHarmonic mean: %.2f.\n\n", har_mean);
}

