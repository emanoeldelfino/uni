#include <stdio.h>

int main(int argc, char *argv[]) {
    int n, x;

    do {
        printf("\nEnter two integers (1st one must be greater than 1): ");
        scanf("%d %d", &n, &x);
    } while ( n <= 1);

    char text[128];
    sprintf(text, "multiple of %d", x);

    int i;

    printf("\n");
    for (i = 1; i <= n; i++) {
        printf("%d %s\n", i, i % x == 0 ? text : "");
    }
    printf("\n");

    return 0;
}

