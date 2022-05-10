/* - Crie um programa que imprima os elementos de um array em ordem inversa. */

#include <stdio.h>

#define MAX 5

void print_rev_arr(int arr[], unsigned int size) {
	int i;
	
	for (i = size - 1; i >= 0; i--) {
		printf("%d ", *(arr + i));
	}
}

int main(int argc, char *argv[]) {
	int arr[MAX] = {1, 2, 3, 4, 5};
	
	print_rev_arr(arr, MAX);
}

