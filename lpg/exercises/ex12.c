/*
- Escrever um programa que imprima as primerias cinco tabelas de multiplicação:
1  2  3  4  5
2  4  6  8  10
3  6  9  12 15
4  8  12 16 20
5  10 15 20 25
6  12 18 24 30
7  14 21 28 35
8  16 24 32 40
9  18 27 36 45
10 20 30 40 50
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%2d ", i * j);
        }
        printf("\n");
    }
    printf("\n");
}

