/*
Criar um programa que a partir do array que contém ["azul", "amarelho", 
"vermelho", "verde", "marrão", "rosa"] verifique se uma cor digitada pelo 
usuário está ou não no array.
*/

#include <stdio.h>
#include <string.h>

#define MAX 6

int main(int argc, char *argv[]) {
    const char *colors[MAX] = {"azul", "amarelo", "vermelho", "verde", "marrom", "rosa"};

    char color[256];

    printf("Digite uma cor: ");
    scanf("%s", color);

    printf("Cor %s\n", color);

    int found = -1;
    int i;
    for (i = 0; i < MAX && found == -1; i++) {
        if (strcmp(colors[i], color) == 0) {
            found = i;
        }
    }

    if (found != -1)
        printf("Cor encontrada na posição %d.\n", found);
    else
        printf("Cor não encontrada.\n");

    return 0;
}

