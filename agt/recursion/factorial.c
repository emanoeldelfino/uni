#include <stdio.h>

long fact(int num);

int main(int argc, char *argv[]) {
    int num;
    do {
        printf("\nEnter a positive integer number for factorial: ");
        scanf("%d", &num);
    } while (num < 0);
    printf("\nfact(%d) = %ld\n", num, fact(num));
}

long fact(int num) {
    return (num <= 1 ? 1 : (long)num * fact(num - 1));
}

