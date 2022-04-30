/*
- Criar um programa com uma função que permita receber um array como 
parâmetro e devolva uma cópia.
*/

#include <stdio.h>

#define MAX 3

void *copy_arr(int *arr, unsigned int size, int *dest);

int main(int argc, char *argv[]) {
    int arr[MAX] = {12, 84, 50};
    int copy[MAX];

    copy_arr(arr, MAX, copy);

    int i;
    for (i = 0; i < MAX; i++) {
        printf("%d -> %d\n", i + 1, copy[i]);
    }
}

void *copy_arr(int *arr, unsigned int size, int *dest) {
    int i;
    for(i = 0; i < size; ++i) {
        dest[i] = arr[i];
    }
}

