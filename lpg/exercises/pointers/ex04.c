/* - Crie um programa que adicione dois números com ponteiros utilizando chamada por referência. */

#include <stdio.h>

void sumPtrs(int *n1Ptr, int *n2Ptr, int *sumPtr) {
	*sumPtr = *n1Ptr + *n2Ptr;
}

int main(int argc, char *argv[]) {
	int n1 = 5, n2 = 8;
	
	int *n1Ptr = &n1;
	int *n2Ptr = &n2;
	int sum = 0;
	int *sumPtr = &sum;
	sumPtrs(n1Ptr, n2Ptr, sumPtr);
	
	printf("\nA soma de %d e %d eh %d.\n", *n1Ptr, *n2Ptr, sum);
}
