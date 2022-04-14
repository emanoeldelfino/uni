#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;

    do {
        printf("\nEnter a number greater than 0: ");
        scanf("%d", &n);
    } while (n <= 0);

    int na = n, s = 1, i = 0;
    while ((na - s) > 0) {
        printf("\n%d - %d = %d", na, s, na - s);
        na -= s;
        s += 2;
        i++;
    }

    printf("\n\nThe integer part of sqrt(%d) is %d.\n\n", n, i);
}

