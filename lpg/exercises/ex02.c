/*
Criar um programa que solicite um número ao usuário e depois faça a divisão por 10.
Exemplo: 5 / 10 é igual 0.5
*/

#include <stdio.h>

int main() {
    float num;

    printf("Numero: ");
    scanf("%f", &num);

    printf("\n%.1f / 10 = %.1f\n", num, num / (float)10);

    return 0;
}
