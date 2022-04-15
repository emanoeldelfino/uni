/*
Criar um programa que determine se uma string digitada pelo usuário começa com um número 
ou com uma letra.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[256];

    printf("Digite um texto: ");
    scanf("%255s", &str);

    char stChar = str[0];

    if (isdigit(stChar)) {
        printf("Comeca com numero.");
    } else if (isalpha(stChar)) {
        printf("Comeca com uma letra.");
    } else {
        printf("Nao comeca nem com um numero, nem uma letra.");
    }

    return 0;
}
