#include <stdio.h>

int main(int argc, char *argv[]) {
    int n, n1 = 1, n2 = 2;
    float sum_s1 = 0, sum_s2 = 1;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        n1 += 2;
        n2 += 3;
    }
}

