/* - Crie um programa que adicione dois numeros com ponteiros. */

#include <stdio.h>

int main(int argc, char *argv[]) {
	int n1 = 5, n2 = 8;
	
	int *n1Ptr = &n1;
	int *n2Ptr = &n2;
	int sum = *n1Ptr + *n2Ptr;
	
	printf("\nA soma de %d e %d eh %d.\n", *n1Ptr, *n2Ptr, sum);
}
