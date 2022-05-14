/* Crie um programa que calcule o comprimento de uma string utilizando ponteiros. */

#include <stdio.h>

#define MAX 3

int str_len(char *str) {
	char *startPtr, *endPtr;
	startPtr = endPtr = str;

	while (*endPtr != '\0') {
		endPtr++;
	}
	printf("%d - %d = %d\n", endPtr, startPtr, (endPtr - startPtr));
	printf("%p - %p = %p\n", endPtr, startPtr, (endPtr - startPtr));
	printf("Char size -> %d byte\n", sizeof(char));

	return (int) (endPtr - startPtr);
}

int main(int argc, char *argv[]) {
	char str[256];

	printf("Digite um texto: ");
	fgets(str, 256, stdin);
	
	printf("O tamanho do texto eh de %d bytes.", str_len(str));

	return 0;
}

