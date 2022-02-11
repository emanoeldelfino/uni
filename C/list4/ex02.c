#include <stdio.h>

int main(int argc, char *argv[]) {
    int i, k;
    float sum = 0;

    printf("\n");
    do {
        printf("Enter the number of terms: ");
        scanf("%d", &k);
    } while (k <= 0);

    printf("\n((-1)^n+1) / n = ");
    for (i = 1; i <= k; i++) {
        sum += ((1.0 / i) * (i % 2 ? 1 : -1));
        printf("1 / %d %c ", i, i == k ? '=' :
                                 i % 2 ? '-' : '+');
    }
    printf("%.2f\n\n", sum);

}

