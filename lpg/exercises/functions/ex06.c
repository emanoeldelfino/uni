/*
Criar um programa que permita inserir uma sequência de n números inteiros (fornecida 
pelo usuario) e imprimir em ordem inversa à da leitura. n deve estar dentro do limite 
permitido, senão o programa deve perguntar novamente e permitir a execução somente após 
n estar dentro do limite permitido.
*/

#include <stdio.h>

#define MIN 0
#define MAX 100

int main(int argc, char *argv[]) {
    int count, num;

    do {
        printf("Quantidade de numeros: ");
        scanf("%d", &count);
    } while (count <= 0);

    int nums[count];

    int i;
    for (i = 0; i < count; i++) {
        do {
            printf("Número %d (0 a 100): ", i + 1);
            scanf("%d", &num);
        } while (num < MIN || num > MAX);

        nums[i] = num;
    }

    printf("\n");
    for (i = count - 1; i >= 0; i--) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

