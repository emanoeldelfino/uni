#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int nums_zero[30];
    int nums_no_zero[30];

    int i;

    srand(time(NULL));

    for (i = 0; i < 30; i++) {
        nums_zero[i] = nums_no_zero[i] = rand() % 11;

        if (nums_no_zero[i] == 0) nums_no_zero[i] = 1;
    }

    for (i = 0; i < 30; i++) 
        printf("%d ", nums_zero[i]);
    printf("\n");

    for (i = 0; i < 30; i++) 
        printf("%d ", nums_no_zero[i]);
    printf("\n");
}

