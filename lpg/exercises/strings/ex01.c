/*
Criar um programa em fazendo uso de programação modular (funções):
Menu com 4 opções:
1) Acrescente 10 caracteres da string em s2 à string em s1.
2) Determine o comprimento da string em s1. Imprima o resultado.
3) Converta a string “-21” em int e imprima o valor.
4) Sair
*/

#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void add10(char *s1, char *s2) {
	strncat(s1, s2, 10);
}

void string_len(char *s1) {
	printf("\nO comprimento da string eh %d.\n", strlen(s1));
}

int num_to_str(char * str) {
	return atoi(str);
}

int main(int argc, char *argv[]) {
	int option, num;
	char s1[256], s2[256];

	printf("String 1: ");
	scanf("%s", &s1);
	printf("String 2: ");
	scanf("%s", &s2);

	do {
		printf("\nString s1: %s", s1);
		printf("\nString s2: %s\n", s2);
		printf("\n1) Acrescente 10 caracteres da string em s2 a string em s1;");
		printf("\n2) Determine o comprimento da string em s1;");
		printf("\n3) Converte a string \"-21\" em int;");
		printf("\n4) Sair.");
		printf("\nOpcao: ");
		scanf("%d", &option);
		
		switch(option) {
			case 1:
				add10(s1, s2);
			break;
				
			case 2:
				string_len(s1);
			break;
			
			case 3:
				num = num_to_str("-21");
				printf("\nConvertendo -21 string para int: %d.", num);
				printf("\nSomando 1 a -21 temos: %d.\n", num + 1);
			break;
			
			case 4:
				printf("\nSaindo...\n");
			break;
			
			default:
				printf("\nOpcao invalida!\n");
		}
	} while (option != 4);

	return 0;
}

