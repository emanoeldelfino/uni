#include <stdio.h>

int main(int argc, char *argv[]) {
    int x, divisors = 0;
    printf("\nNumber: ");
    scanf("%i", &x);

    printf("");

    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            divisors++;
            printf("\n%i -> %i", divisors, i);
        }
    }

    printf("\n\nNumber of divisors of %d is %d.\n\n", x, divisors);
}
