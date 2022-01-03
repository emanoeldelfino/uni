#include <stdio.h>

int main(int argc, char *argv[]) {
    int a, b;
    do {
        printf("\nEnter 2 integers greater than 0: ");
        scanf("%d %d", &a, &b);
    } while (a < 0 || b < 0);

    int i, rep, val, sum = 0;

    if (a < b) {
        rep = a;
        val = b;
    } else {
        rep = b;
        val = a;
    }

    printf("\n");

    for (i = 0; i < rep; i++) {
        printf("%d %c ", val, i < rep - 1 ? '+' : '=');
        sum += val;
    }

    printf("%d\n\n", sum);
}
