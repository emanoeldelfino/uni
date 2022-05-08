/*
- Crie um programa que receba quatro strings que representem inteiros, converta as strings em inteiros, some os valores e
imprima o total dos quatro valores.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAX 4

int isnum(char *str);

int sum_strings(char *nums[], unsigned int size);

int main(int argc, char *argv[]) {
	char *strings[MAX];
	char string[256];

	int i;
	for (i = 0; i < MAX; i++) {
        strings[i] = malloc(sizeof(char) * 256);
		printf("Digite a string %d: ", i + 1);
		scanf("%s", string);
        strcpy(strings[i], string);
	}

    printf("\nSoma das strings inteiras eh: %d.\n", sum_strings(strings, MAX));

	return 0;
}

int isnum(char *str) {
    char digit;
    int i;
    for (i = 0, digit = str[i]; digit != '\0'; i++) {
        if (!isdigit(digit)) {
            return 0;
        }
        digit = str[i];
    }
    return 1;
}

int sum_strings(char **nums, unsigned int size) {
	int sum = 0;
	int i;
	for (i = 0; i < size; i++) {
        if (isnum(nums[i])) {
            sum += atoi(nums[i]);
        }
	}
	return sum;
}

