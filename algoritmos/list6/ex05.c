#include <stdio.h>

long fib(int n);

int main(int argc, char *argv[]) {
    int num;
    do {
        printf("\nEnter number of terms for fibonacci sequence: ");
        scanf("%d", &num);
    } while (num <= 0);

    int i;

    printf("\n");

    for (i = 1; i <= num; i++) {
        printf("%ld%s", fib(i), i < num ? ", " : "");
    }

    printf("\n\n");
}

long fib(int n) {
    long f1 = 1, f2 = 1, f = 1;
    int i;
    for (i = 2; i < n; i++) {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    }
    return f;
}

