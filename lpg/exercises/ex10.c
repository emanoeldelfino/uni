/*
Escrever um programa que utilize dois ciclos for e mostre os números primos entre 2 e 100.
*/

#include <stdio.h>

#define MIN 2
#define MAX 100

int main() {
    int prime, isPrime;

    printf("Numeros primos entre %d e %d: ", MIN, MAX);

    for (int i = 2; i <= MAX; i++) {
        isPrime = 1;
        for (int j = 2; j < i && isPrime; j++) {
            if (i % j == 0) {
                isPrime = 0;
            }
        }
        if (isPrime) printf("%d ", i);
    }

    printf("\n");
}

