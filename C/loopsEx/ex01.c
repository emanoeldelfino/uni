#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;

    do {
        printf("Enter an integer greater than 1: ");
        scanf("%d", &n);
    } while (n <= 1);

    printf("\n");

    int i;
    for (i = 1; i < n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
