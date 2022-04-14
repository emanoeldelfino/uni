#include <stdio.h>

int main() {
    int n;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    printf("\n");

    for (int i = 1; i <= 10; i++) {
        printf("%i x %2i = %3i\n", n, i, n*i);
    }

    printf("\n");
}

