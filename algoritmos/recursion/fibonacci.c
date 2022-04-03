#include <stdio.h>

int fib(int terms);

int main(int argc, char *argv[]) {
    int num;
    do {
        printf("\nEnter a term for Fibonacci (negative for stopping): ");
        scanf("%d", &num);
        printf("\nFibonacci(%d) = %d\n", num, fib(num));
    } while (num >= 0);
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

