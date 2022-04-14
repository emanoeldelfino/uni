#include <stdio.h>

int iter_sum(int n);

int rec_sum(int n);

int main(int argc, char *argv[]) {
    int num;
    do {
        printf("\nEnter a number to sum (negative or zero to stop): ");
        scanf("%d", &num);

        printf("\nIterative sum: ");
        printf("%d", iter_sum(num));
        printf("\nRecursive sum: ");
        printf("%d", rec_sum(num));
        printf("\n");
    } while (num > 0);

    printf("\n");
}

int iter_sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        printf("%d %c ", i, i < n ? '+' : '=');
        sum += i;
    }
    return sum;
}

int rec_sum(int n) {
    if (n < 1) {
        return 0;
    } else {
        printf("%d ", n);
        if (n == 1) {
            printf("= ");
            return 1;
        } else {
            printf("+ ");
            return n + rec_sum(n - 1);
        }
    }
    //return (n <= 1 ? 1 : n + rec_sum(n - 1));
}

