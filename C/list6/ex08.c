#include <stdio.h>

double iter_harmonic(int n);

double rec_harmonic(int n);

int main(int argc, char *argv[]) {
    int num;
    do {
        printf("\nEnter a number for sum of harmonic series terms: ");
        scanf("%d", &num);
        
        printf("\nIterative Harmonic series sum: ");
        printf("%.5lf", iter_harmonic(num));
        printf("\nRecursive Harmonic series sum: ");
        printf("%.5lf", rec_harmonic(num));
    } while (num <= 0);
    printf("\n");
}

double iter_harmonic(int n) {
    int i;
    double sum = 0;

    for (int i = 1; i <= n; i++) {
        //printf("(1 / %d) %c ", i, i < n ? '+' : '=');
        sum += ((double)1 / i);
    }

    return sum;
}

double rec_harmonic(int n) {
    if (n < 1) {
        return (double)0;
    } else {
        //printf("(1 / %d) ", n);
        if (n == 1) {
            //printf("= ");
            return (double)1;
        } else {
            //printf("+ ");
            return (double)1 / n + rec_harmonic(n - 1);
        }
    }
}

