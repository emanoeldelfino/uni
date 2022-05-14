/*
Crie um programa que receba várias linhas de texto e um caractere de pesquisa, e 
determine o total de ocorrências do caractere nas linhas de texto.
*/

#include <stdio.h>
#include <string.h>

int find_str(char *str, char find);

int main(int argc, char *argv[]) {
    char input[256] = "", text[1024] = "", search;
    int num;

    printf("Digite um texto: \n");
    while (scanf("%[^\n]%*c", input) == 1) {
        strcat(input, "\n");
        strcat(text, input); 
    }

    printf("Caracter de pesquisa: ");
    scanf(" %c", &search);

    printf("\n");

    printf("\nO caracter %c aparece %d vez(es) no texto.\n", search, find_str(text, search));

    return 0;
}

int find_str(char *str, char find) {
    char ch;
    int i;
    int occurrences = 0;

    for (i = 0, ch = str[i]; ch != '\0'; i++) {
        ch = str[i];
        if (ch == find) {
            printf("Ocorrencia %d na posição %d.\n", ++occurrences, i + 1);
        }
    }

    return occurrences;
}

