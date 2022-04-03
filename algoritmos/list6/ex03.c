#include <stdio.h>

int sum_odds(int x, int y);

int main(int argc, char *argv[]) {
    int n1, n2;

    printf("\nEnter two numbers between a space or enter: ");
    scanf("%d %d", &n1, &n2);

    printf("\n%d\n\n", sum_odds(n1, n2));

    return 0;
}

int sum_odds(int x, int y) {
    int i;
    int a = x;
    int b = y;
    int sum = 0;
    char elem[256];

    if (x > y) {
        a = y;
        b = x;
    }
    a += (a % 2 ? 2 : 1);
    for (i = a; i < b; i+= 2) {
        snprintf(elem, 256, i > a && i < 0 ? "(%d)" : "%d", i);
        printf("%s %c ", elem, i < b - 1 ? '+' : '=');
        sum += i;
    }

    printf("%d", sum);

    return sum;
}

