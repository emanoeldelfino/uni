/*
Criar um programa que permita inserir uma sequência de n números inteiros (fornecida 
pelo usuario) e imprimir em ordem inversa à da leitura. n deve estar dentro do limite 
permitido, senão o programa deve perguntar novamente e permitir a execução somente após 
n estar dentro do limite permitido.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    int count, unique_count = 0, found;
    float num;

    do {
        printf("Quantidade de numeros: ");
        scanf("%d", &count);
    } while (count <= 0);

    float nums[count];
    int freq[count];

    int i, j;
    for (i = 0; i < count; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &num);

        found = 0;
        for (j = 0; j < unique_count && !found; j++) {
            if (num == nums[j]) {
                freq[j]++;
                found = 1;
            }
        }
        if (!found) {
            nums[unique_count] = num;
            freq[unique_count] = 1;
            unique_count++;
        }
    }

    printf("\nNum  Freq\n");
    for (i = 0; i < unique_count; i++) {
        printf("%.1f   %d\n", nums[i], freq[i]);
    }

    return 0;
}

