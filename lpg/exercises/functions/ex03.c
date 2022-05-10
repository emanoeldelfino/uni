/*
- Criar um programa com uma função que calcule a media de um array de numeros. Se estiver vacio deve indicar que o
resultado é zero.
*/

#include <stdio.h>
#define TAM 3

float media (int arr[], int size) {
	float res;
	int soma = 0;
	int i;
	
	for (i = 0;i < TAM;i++) {
		soma = soma + arr[i];
	}
	
	res = (float)soma / size;
	
	return res;
}

int main(int argc, char *argv[]) {
	int nums[TAM] = {10, 20, 30};
	float res;
	
	res = media(nums, TAM);
	
	printf("A média dos valores e %.1f", res);
	
	return 0;
}

