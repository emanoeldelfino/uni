/*
Criar um programa que mostre todos os números de 1 a n, incrementando de 1 em 1.
n é digitado pelo usuário.
*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    int i;
    for (i = 1; i <= num; i++) {
        printf("%d ", i);
    }

    return 0;
}

