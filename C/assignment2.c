#include <stdio.h>

int main(int argc, char *argv[]) {
    int a, b, ad, bd, div, gcd, lcm;
    char repeat;

    do {
        do {
            printf("\nType 2 integers greater than 0: ");
            scanf("%d %d", &a, &b);
        } while (a <= 0 || b <= 0);

        ad = a, bd = b;
        div = 2;
        lcm = 1, gcd = 1;

        while (ad > 1 || bd > 1) {
            if (ad % div == 0 || bd % div == 0) {
                lcm *= div;
                if (ad % div == bd % div) {
                    gcd *= div;

                    ad /= div;
                    bd /= div;
                } else {
                    ad /= ad % div == 0 ? div : 1;
                    bd /= bd % div == 0 ? div : 1;
                }
            } else {
                div++;
            }
        }

        printf("The LCM between %d and %d is %d, and the GCD is %d.\n", a, b, lcm, gcd);

        do {
            printf("\nDo you want to calculate GCD and LCM again? [Y/N] ");
            scanf(" %c", &repeat);
        } while (repeat != 'Y' && repeat != 'y' && repeat != 'N' && repeat != 'n');
    } while (repeat == 'Y' || repeat == 'y');
}

