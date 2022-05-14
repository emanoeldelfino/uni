/*
Escrever um programa que some todos os números pares entre N e M.
N e M são digitados pelo usuário.
*/

#include <stdio.h>

int main() {
    int n, m, sum_even = 0;

    printf("Digite o valor n: ");
    scanf("%d", &n);
    printf("Digite o valor m: ");
    scanf("%d", &m);

    int i;
    if (n < m) {
        if (n % 2) n++;
        if (m % 2) m--;
        for (i = n; i <= m; i += 2) {
            printf("%d %c ", i, i < m ? '+' : '=');
            sum_even += i;
        }
    } else {
        if (m % 2) m++;
        if (n % 2) n--;
        for (i = n; i >= m; i -= 2) {
            printf("%d %c ", i, i > m ? '+' : '=');
            sum_even += i;
        }
    }

    printf("%d", sum_even);

    return 0;
}

