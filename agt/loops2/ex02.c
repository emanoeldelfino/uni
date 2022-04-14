#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;

    do {
        printf("\nEnter an integer: ");
        scanf("%d", &n);
    } while ( n < 1);

    int i, sum = 0, sum_sqrs = 0;

    for (i = 1; i <= n; i++) {
        sum += i;
        sum_sqrs += i * i;
    }

    float avg = sum / n;

    printf("\nSum: %d.", sum);
    printf("\nSum of squares: %d.", sum_sqrs);
    printf("\nAverage: %.2f.\n\n", avg);
}

