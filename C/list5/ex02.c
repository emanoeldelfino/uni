#include <stdio.h>

#define CAP 30

int main(int argc, char *argv[]) {
    int nums[CAP];
    int i;

    printf("\n");
    for (i = 0; i < CAP; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &nums[i]);

        if (nums[i] == 0) nums[i] = 1;
    }

    printf("\n");
    for (i = 0; i < CAP; i++) 
        printf("%d ", nums[i]);
    printf("\n\n");
}

