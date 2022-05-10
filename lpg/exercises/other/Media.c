#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int quant, cont = 0;
	float num, soma = 0, media, desvio, soma_desvio = 0;

	do {
		printf("Quantos valores quer informar? ");
		scanf("%d", &quant);
	} while (quant <= 0);
	
	float nums[quant];
	
	int i;
	for (i = 0; i < quant; i++) {
		printf("Digite o %do. valor: ", i+1);
		scanf("%f", &num);
		nums[i] = num;
		soma = soma + num;
	}
	
	media = soma / (float)quant;
	
	for (i = 0; i < quant; i++) {
		soma_desvio = soma_desvio + pow(nums[i] - media, 2);
	}
	desvio = sqrt(soma_desvio / quant);
	
	printf("\nA media dos valores e %.2f", media);
	printf("\nO desvio padrao e %.4f", desvio);	
	
	return 0;
}
