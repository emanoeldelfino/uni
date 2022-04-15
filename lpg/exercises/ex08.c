/*
Escrever um programa que, para n > 0, calcule: n Σ i - 1 -> i . (i + 1)
*/

#include <stdio.h>

int main() {
    int n, formula;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n > 0) {
        int i;
        for (i = 1; i <= n; i++) {
            formula = i * (i + 1);
            printf("\nPara n = %d -> %d", n, formula);
        }

        printf("\n");
    }
}

