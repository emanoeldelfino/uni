#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double * quadratic_eq(double a, double b, double c) {
    double *delta_n_roots = malloc(sizeof(double) * 3);

    double delta = (double)(pow(b, 2)) - 4 * a * c;

    delta_n_roots[0] = delta;

    if (delta > 0) {
        delta_n_roots[1] = (-b + sqrt(delta)) / (2 * a);
        delta_n_roots[2] = (-b - sqrt(delta)) / (2 * a);
    } else if (delta == 0) {
        delta_n_roots[1] = delta_n_roots[2] = -b / (2 * a);
    } else {
        delta_n_roots[1] = -b / (2 * a);           // real part
        delta_n_roots[2] = sqrt(-delta) / (2 * a); // imaginary part
    }

    return delta_n_roots;
}

int main() {
    double a, b, c;

    printf("\nEnter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("\n");

    if (a != 0) {
        double *delta_roots = quadratic_eq(a, b, c);

        printf("Delta: %.1lf.\n", delta_roots[0]);

        if (delta_roots[0] >= 0) {
            printf("Root 1: %.1lf.", delta_roots[1]);
            printf("\nRoot 2: %.1lf.", delta_roots[2]);
        } else {
            printf("\nThere are no real roots.\n");
            printf("\nReal part: %.1lf.", delta_roots[1]);
            printf("\nImaginary part: %.5lf.", delta_roots[2]);
            printf("\n\nRoot 1: %.1lf + %.5lfi.", delta_roots[1], delta_roots[2]);
            printf("\nRoot 2: %.1lf - %.5lfi.", delta_roots[1], delta_roots[2]);
        }
    } else {
        printf("Invalid quadratic equation for a equals zero.");
    }

    printf("\n\n");
}

