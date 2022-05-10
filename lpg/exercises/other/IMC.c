#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float massa, altura, imc;
	
	printf("Informe a massa em kg: ");
	scanf("%f", &massa);
	printf("Informe a altura em metros: ");
	scanf("%f", &altura);
	
	imc = massa / (altura * altura);
	
	printf("\a\nSeu IMC e %.2f", imc);
	
	if (imc < 18.5);
		printf("Seu nivel é Magro");
	if (18.5 < imc < 24.9);
		printf("Seu nivel é Magro");
	if (25 < imc < 29.9);
		printf("Seu nivel é Obesidade Grau 1");
	if (30 < imc < 39.9);
		printf("Seu nivel é Obesidade Grau 2");
	if (imc > 40);
		printf("Seu nivel é Obesidade Grau 3");				
	
	return 0;
}

