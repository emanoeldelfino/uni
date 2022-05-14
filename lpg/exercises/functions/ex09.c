/* Criar um programa que encontre o maior número em uma matriz. */

#include <stdio.h>

int largest_in_matrix(int *matrix, int rows, int cols);

int main(int argc, char *argv[]) {
    int rows, cols;
    printf("Numero de linhas da matriz: ");
    scanf("%d", &rows);

    printf("Numero de colunas da matriz: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    int i, j;
    for (i = 0; i < rows; i++) {
        printf("\n");
        for (j = 0; j < cols; j++) {
            printf("Valor [Linha %d][Coluna %d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int larg = largest_in_matrix(matrix, rows, cols);

    printf("\nO maior valor na matriz eh %d.\n", larg);

    return 0;
}


int largest_in_matrix(int *matrix, int rows, int cols) {
    int i;
    int largest = matrix[0];
    int size = rows * cols;

    for (i = 0; i < size; i++) {
        if (matrix[i] > largest)
            largest = matrix[i];
    }

    return largest;
}

