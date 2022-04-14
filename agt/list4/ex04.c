#include <stdio.h>

long fact(int num);

int main(int argc, char *argv[]) {
    double sum = 0;
    int i, n;

    do {
        printf("Number of terms: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("\n");
    for (i = 0; i < n; i++) {
        printf("1 / %d! %c ", i, i < n - 1 ? '+' : '=');
        sum += (double)1 / fact(i);
    }
    printf("\n%.15lf\n\n", sum);
}

long fact(int num) {
    long f = 1;
    int i;
    for (i = 1; i <= num; i++)
        f *= i;
    return f;
}

