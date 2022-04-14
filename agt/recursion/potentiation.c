#include <stdio.h>

float power(float base, float exponent);

int main(int argc, char *argv[]) {
    int base, exp;
    printf("\nEnter a base: ");
    scanf("%d", &base);
    printf("\nEnter a exponent: ");
    scanf("%d", &exp);
    printf("\n(%d) ^ %d = %.1f\n", base, exp, power(base, exp));
}

float power(float base, float exponent) {
    if (exponent == 0)
        return 1;
    else if (exponent < 0)
        return (base != 0 ? power(1/base, -exponent) : 0);

    return base * power(base, exponent - 1);
}

