#include <stdio.h>

#define CAP 20

int main(int argc, char *argv[]) {
    int nums[CAP];
    int i;

    printf("\n");
    for (i = 0; i < CAP; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &nums[i]);
    }

    printf("\n");
    for (i = 0; i < CAP; i++) {
        if (nums[i] >= 0)
            printf("%d ", nums[i]);
    }
    printf("\n\n");
}

