/*
- Crie um programa que receba uma linha de texto no array de char s[100]. Imprima a linha com letras maiúsculas e
minúsculas.
*/

#include <stdio.h>
#include <string.h>

#define MAX 100

char * strtoupper(char *str, unsigned int size);

char * strtolower(char *str, unsigned int size);

int main(int argc, char *argv[]) {
	char s[MAX];
	
	printf("Digite uma string qualquer: ");
	scanf("%s", s);

	printf("\nEm maiusculas: %s.", strtoupper(s, MAX));
	printf("\nEm minusculas: %s.\n", strtolower(s, MAX));

	return 0;
}

char * strtoupper(char *str, unsigned int size) {
	char strtoupper[size];
	int i;
	for (i = 0; i < size; i++) {
		strtoupper[i] = toupper(str[i]);
	}
	return strtoupper;
}

char * strtolower(char *str, unsigned int size) {
	char strtolower[size];
	int i;
	for (i = 0; i < size; i++) {
		strtolower[i] = tolower(str[i]);
	}
	return strtolower;
}

