#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIN 10
#define COL LIN

int main(int argc, char *argv[]) {
    int m[LIN][COL];

    int i, j;

    char str[25];

    snprintf(str, 25, "Matrix (%dx%d)", LIN, COL);
    printf("\n   %*s%s\n", ((COL * 5) - (int)strlen(str)) / 2, " ", str);

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            //printf("Value [%d, %d]: ", i, j);
            //scanf("%d", &m[i][j]);
            m[i][j] = rand() % 10000;
        }
    }

    printf("\n   ");

    for (j = 0; j < COL; j++)
        printf("%-4d ", j+1);

    for (i = 0; i < LIN; i++) {
        printf("\n%-3d", i+1);

        for (j = 0; j < COL; j++) {
            printf("%4d ", m[i][j]);
        }
    }

    printf("\n\n");
}

