#include <stdio.h>

int main(int argc, char *argv[]) {
    float x;
    int n, i, j;

    printf("Type x and the quantity of n terms: ");
    scanf("%f%d", &x, &n);
    float e_x = 0;
    for (i = 0;  i <= n; i++) {
        float term = 1;
        for (j = 1; j <= 1; j++) {
            term *= x / j;
        }

        printf("Term %d: %.3lf\n", i, term);
        
        e_x += term;
    }

    printf("e to the power of %.3lf (%d terms): %.15lf\n", x, n, e_x);

    return 0;
}

