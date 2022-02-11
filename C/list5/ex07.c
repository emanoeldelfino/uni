#include <stdio.h>

#define CAP 30

int main(int argc, char *argv[]) {
    int nums[CAP], aux;
    int i;

    printf("\n");
    for (i = 0; i < CAP; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < (CAP / 2); i++) {
        aux = nums[i];
        nums[i] = nums[CAP - i - 1];
        nums[CAP - i - 1] = aux;
    }

    printf("\n");
    for (i = 0; i < CAP; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n\n");
}

