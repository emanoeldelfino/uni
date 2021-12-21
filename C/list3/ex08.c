#include <stdio.h>

int main(int argc, char *argv[]) {
    int n, i, d;

    printf("\nInitial term of arithmetic progression: ");
    scanf("%d", &i);

    printf("\nThe common difference between the terms: ");
    scanf("%d", &d);

    printf("\nNumber of terms: ");
    scanf("%d", &n);

    printf("\n");
    
    int t = 1;
    for (int c = i; c < i + (d * n); c = c + d) {
        printf("Term %d -> %d\n", t, c);
        t++;
    }

    printf("\n");
}

