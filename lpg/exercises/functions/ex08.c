/*
Criar um programa que permita contar a quantidade de elementos de uma 
matriz.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    //int matrix[2][4] = {{1, 1, 1, 1}, {1, 1, 1, 1}};
    int rows, cols, size;

    printf("Numero de linhas da matriz: ");
    scanf("%d", &rows);

    printf("Numero de colunas da matriz: ");
    scanf("%d", &cols);

    size = rows * cols;

    printf("\nO numero de elementos da matriz eh %d.\n", size);

    return 0;
}

