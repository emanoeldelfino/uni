/*
Crie um programa que receba várias linhas de texto e conte o número total de palavras. 
Considere que as palavras estejam separadas por espaços ou caracteres de newline.
*/

#include <stdio.h>
#include <string.h>

int count_words(char *str);

int main(int argc, char *argv[]) {
    char input[256] = "", text[1024] = "";
    int num;

    printf("Digite um texto: \n");
    while (scanf("%[^\n]%*c", input) == 1) {
        strcat(input, "\n");
        strcat(text, input); 
    }

    printf("O numero de palavras no texto eh %d.\n", count_words(text));

    return 0;
}

int count_words(char *str) {
    char ch;
    int word_count = 0;
    int i;

    for (i = 0, ch = str[i]; ch != '\0'; i++) {
        ch = str[i];

        if (ch == ' ' || ch == '\n')
            word_count++;
    }

    return word_count;
}

