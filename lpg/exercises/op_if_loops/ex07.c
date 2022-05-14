/*
Criar um programa que mostre todos os números de 1 a n, incrementando de 2 em 2.
n é digitado pelo usuário.
*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    int i;
    for (i = 1; i <= num; i+=2) {
        printf("%d ", i);
    }

    return 0;
}
