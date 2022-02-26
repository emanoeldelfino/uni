#include <stdio.h>
#include <math.h>

int is_prime(long n);    

int main(int argc, char *argv[]) {
    long k, n;

    do {
        printf("\nEnter two numbers: ");
        scanf("%ld %ld", &k, &n);
    } while (n <= 0);

    long i = 0;

    while (i < n) {
        k++;
        if (is_prime(k)) {
            printf("\n%ld -> %ld", i+1, k);
            i++;
        }
    }

    printf("\n\n");

    return 0;
}

int is_prime(long n) {
    long i;
    float r = sqrt(n);

    for (i = 2; i < r; i++)
        if (n % i == 0)
            return 0;
    
    return 1;
}

