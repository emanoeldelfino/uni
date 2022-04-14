#include <stdio.h>

float potentiation(float b, int e);

int main(int argc, char *argv[]) {
    float base;
    int exponent;

    printf("Base value: ");
    scanf("%f", &base);

    printf("Exponent value: ");
    scanf("%d", &exponent);

    float result = potentiation(base, exponent);

    printf("\n%.3f to the %d = %.3f\n", base, exponent, result);

    return 0;
}

float potentiation(float b, int e) {
    if (b == 0)
        return 0;

    if ( e < 0) {
        b = 1/b;
        e = -e;
    }

    float x = 1;
    while (e > 0) {
        x *= b;
        e--;
    }

    return x;
}

