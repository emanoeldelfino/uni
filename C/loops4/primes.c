#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int num, in_limit, up_limit, primes;
    
    printf("Inferior limit: ");
    scanf("%i", &in_limit);

    printf("Upper limit: ");
    scanf("%i", &up_limit);

    for (int num = in_limit; num <= up_limit; num++) {
        int divisors = 0, is_prime = 1;

        float r = sqrt(num);

        for (int i = 2; i < r && is_prime; i++) {
            if (num % i == 0)
                is_prime = 0;
        }

        if (is_prime) {
           primes++;
           printf("%i: %i\n", primes, num);
        }
    }
}

