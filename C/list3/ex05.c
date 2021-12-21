#include <stdio.h>

int main(int argc, char *argv[]) {
    int n, sum;

    printf("\nNumber: ");
    scanf("%d", &n);

    sum = n + 1;

    printf("\n1 + ");
    for(int i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("%d + ", i);
            sum += i;
        }
    }
    printf("%d = %d\n", n, sum);

    printf("\nThe number %d is%s perfect.\n\n", n, (sum / 2) == n ? "" : " not");
}

