#include <stdio.h>
#include <math.h>

long fact(int num);

int main(int argc, char *argv[]) {
    int i, j, n;
    int exp = 2;
    long x;
    long exp_res;

    do {
        printf("Number of terms value and X value: ");
        scanf("%d %ld", &n, &x);
    } while (n <= 0);

    double sum = 1;

    printf("\n1 - ");
    for (i = 0; i < n; i++) {
        printf("(x ^ %d) / %d! %c ", exp, exp, i < n - 1 ? 
                                               i % 2 ? '-' : '+'
                                                           : '=');
        exp_res = 1;
        for (j = 0; j < exp; j++)
            exp_res *= x;
        sum += (i % 2 ? 1 : -1) * exp_res / (double)fact(exp);
        exp += 2;
    }
    printf("\n%.11lf\n\n", sum);
}

long fact(int num) {
    long f = 1;
    int i;
    for (i = 1; i <= num; i++)
        f *= i;
    return f;
}

