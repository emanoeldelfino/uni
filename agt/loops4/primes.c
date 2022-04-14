#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    long num, lo_limit, up_limit, primes = 0;
    
    printf("Lower limit: ");
    scanf("%li", &lo_limit);

    printf("Upper limit: ");
    scanf("%li", &up_limit);

    for (num = lo_limit; num <= up_limit; num++) {
        int divisors = 0, is_prime = 1;

        float r = sqrt(num);

        for (int i = 2; i < r && is_prime; i++) {
            if (num % i == 0)
                is_prime = 0;
        }

        if (is_prime) {
           primes++;
           printf("%li: %li\n", primes, num);
        }
    }
}

