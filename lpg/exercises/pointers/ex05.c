/* - Crie um programa que armazene e retorne os elementos de um array utilizando ponteiros. */

#include <stdio.h>

#define MAX 3

int main(int argc, char *argv[]) {
	int nums[MAX];
	// int nums[MAX] = {1, 2, 3, 4, 5, 6};
	
	// nums -> ponteiro do primeiro valor
	// int -> 4 bytes
	// 00000000A0
	// 00000000A4
	// compilador sabe que um inteiro é 4 bytes, então
	// ao somar no nums um número qualquer, ele é
	// multiplicado por 4.

	//printf("%p\n", nums);
	//printf("%d\n", sizeof(int));

	int i;

	for (i = 0; i < MAX; i++) {
		printf("Numero %d: ", i + 1);
		scanf("%d", &nums[i]);
	}
	
	printf("\n");
	
	for (i = 0; i < MAX; i++) {
		printf("%p -> %i\n", (nums + i), *(nums + i));
	}

	return 0;
}
