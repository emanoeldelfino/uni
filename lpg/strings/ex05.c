/*
- Crie um programa que compare duas strings digitadas pelo usuário. O programa deverá 
indicar se a primeira string é menor, igual ou maior que a segunda.
*/

#include <stdio.h>
#include <string.h>

void compstrs(char str1[], char str2[]) {
    if (strcmp(str1, str2) == 0)
        printf("As strings são iguais.");
    else if (strlen(str1) < strlen(str2))
        printf("String 1 é menor que string 2.");
    else
        printf("String 1 é maior que string 2.");
    printf("\n");
}

int main(int argc, char *argv[]) {
    char str1[256], str2[256];
    int comp;

    printf("String 1: ");
    scanf("%s", str1);

    printf("String 2: ");
    scanf("%s", str2);

    compstrs(str1, str2);
}

