#include <stdio.h>

#define MAX 50

int main(int argc, char *argv[]) {
    long fib[MAX];
    int elems;
    int i;

    fib[0] = fib[1] = 1;

    printf("\nFibonacci Series\n\n");
    do {
        printf("Number of elements (between 1 and %d): ", MAX);
        scanf("%d", &elems);
    } while (elems < 1 || elems > MAX);

    for (i = 2; i < elems; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("\nWith N= %d, we have: (", elems);
    for (i = 0; i < elems; i++) {
        printf("%ld%s", fib[i], i < elems - 1 ? ", " : "");
    }
    printf(")\n\n");
}

