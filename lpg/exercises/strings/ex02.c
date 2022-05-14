/*
Crie um programa que receba tres caractere do teclado e teste-o com cada uma das funções na biblioteca
de tratamento de caractere. O programa deverá imprimir o valor retornado por cada função.
*/

#include <stdio.h>
#include <string.h>

void check_str(char *str, unsigned int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("\nisdigit(%c): %d", str[i], isdigit(str[i]));
		printf("\nisalpha(%c): %d", str[i], isalpha(str[i]));
		printf("\nisalnum(%c): %d", str[i], isalnum(str[i]));
		printf("\nisupper(%c): %d", str[i], isupper(str[i]));
		printf("\nislower(%c): %d", str[i], islower(str[i]));
		printf("\nisxdigit(%c): %d", str[i], isxdigit(str[i]));
		printf("\ntolower(%c): %d -> %c", str[i], tolower(str[i]), tolower(str[i]));
		printf("\ntoupper(%c): %d -> %c\n", str[i], toupper(str[i]), toupper(str[i]));
	}
}

int main(int argc, char *argv[]) {
	char str[4];
	
	printf("Digite tres caracteres quaisquer: ");
	scanf("%3s", str);
	
	check_str(str, 3);

	return 0;
}

