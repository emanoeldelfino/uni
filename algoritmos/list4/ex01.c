#include <stdio.h>

int main(int argc, char *argv []) {
    int k;
    int i;
    float sum = 0;

    printf("\n");

    do {
        printf("Number of terms of harmonic series (less than 100000): ");
        scanf("%d", &k);
    } while (k <= 0 || k > 100000);

    k++;

    printf("\n");

    for (i = 1; i < k; i++) {
        sum += 1.0 / i;
        printf("(1 / %d) %c ", i, i < k - 1 ? '+' : '=');
    }

    printf("%.2f\n\n", sum);
}

