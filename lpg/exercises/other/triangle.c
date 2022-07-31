#include <stdio.h>

int main(int argc, char *argv[]) {
    int rows, space, i, j, k;

    printf("Tamanho do triangulo: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++)
            printf("  ");
        for (k = 0; k < 2 * i - 1; k++)
            printf("%c ", k == 0 || k == 2 * i - 2 || i == rows ? '*' : ' ');
        printf("\n");
    }
}

