/*
Criar um programa com uma função que permita realizar todas as operações aritméticas (selecionada pelo usuário). O
programa somente finaliza quando o usuário desejar.
*/

#include <stdio.h>

void menu () {
	printf("\n1 - Adicao");
	printf("\n2 - Subtracao");
	printf("\n3 - Multiplicacao");
	printf("\n4 - Divisao");
	printf("\n5 - Sair");
	printf("\nEscolha uma opcao ");
}

float calc (int opcao) {
	float res, num1, num2;
	
	printf("Digite o primeiro numero ");
	scanf("%f", &num1);
	printf("Digite o segundo numero ");
	scanf("%f", &num2);
	
	switch (opcao) {
		case 1:
			res = num1 + num2;
		break;
		case 2:
			res = num1 - num2;
		break;
		case 3:
			res = num1 * num2;
		break;
		case 4:
			res = num1 / num2;
		break;
	}
	
	return res;
}

int main(int argc, char *argv[]) {
	int opcao;
	float res;
	
	do {
		menu ();
		
		do {
			scanf("%i", &opcao);
			if (opcao < 1 || opcao > 5) 
				printf ("Opcao invalida. Escolha uma opcao ");
		} while (opcao < 1 || opcao > 5);
		
		if (opcao != 5) {
			res = calc(opcao);
		
			printf("O resultado da operacao e %.1f", res);
		}
		
	} while (opcao != 5);
	
	printf("Obrigado por usar o programa");
	
	return 0;
}

