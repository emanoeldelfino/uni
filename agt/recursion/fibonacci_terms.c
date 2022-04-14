#include <stdio.h>

int fib(int terms);

int main(int argc, char *argv[]) {
    int k, i;
    printf("\nEnter number of terms for Fibonacci: ");
    scanf("%d", &k);
    printf("\nFibonacci(%d) = ", k);
    for (i = 1; i <= k; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");
}

int fib(int term) {
    if (term < 1)
        return 0;
    else if (term == 1 || term == 2)
        return 1;
    else
        return fib(term - 1) + fib(term - 2);
}

