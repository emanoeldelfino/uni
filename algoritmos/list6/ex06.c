#include <stdio.h>

int special_sum(int n, int k, int x);

int main(int argc, char *argv[]) {
    int t, m, i;

    printf("Enter number of terms, multiple value and initial count: ");
    scanf("%d %d %d", &t, &m, &i);

    printf("\n%d\n", special_sum(t, m, i));
}

int special_sum(int n, int k, int x) {
    int sum = 0;
    int i = x;
    int t = 0;
    int st_multiple = 0;

    do {
        i++;
        if (i % k == 0)
            st_multiple = i;
    } while (!st_multiple);

    int last_multiple = st_multiple + (k * (n - 1));

    for (i = st_multiple; i <= last_multiple; i+=k) {
        printf("%d %c ", i, i < last_multiple ? '+' : '=');
        sum += i;
    }
    printf("%d", sum);
    return sum;
}

