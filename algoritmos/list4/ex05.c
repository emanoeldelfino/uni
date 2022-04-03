#include <stdio.h>
#include <math.h>

long fact(int num);

int main(int argc, char *argv[]) {
    double sum = 0;
    int i, x, n;

    do {
        printf("X value and Number of terms: ");
        scanf("%d %d", &x, &n);
    } while (n <= 0);

    printf("\n");
    for (i = 0; i < n; i++) {
        printf("(x ^ %d) / %d! %c ", i, i, i < n - 1 ? '+' : '=');
        sum += (long)pow(x, i) / (double)fact(i);
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

