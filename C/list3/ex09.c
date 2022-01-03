#include <stdio.h>

int main(int argc, char *argv[]) {
    int n, n1 = 1, n2 = 2;
    float t, sum_s1 = 0, sum_s2 = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        t = (float)n1 / n2;
        sum_s1 += t;
        n1 += 2;
        n2 += 3;

        sum_s2 += 1.0 / (i + 1);
    }

    printf("\nSum of 1st sequence: %.2f.\n", sum_s1);
    printf("Sum of 2nd sequence: %.2f.\n", sum_s2);
}

