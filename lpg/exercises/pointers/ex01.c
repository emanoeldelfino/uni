/* - Crie um programa que permita mostrar a declara��o b�sica do ponteiro. */

#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	int *nPtr;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	nPtr = &n;

	printf("%d -> %p\n", n, nPtr);
}
