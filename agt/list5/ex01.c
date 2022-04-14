#include <stdio.h>

#define CAP 20

int main(int argc, char *argv[]) {
    int nums[CAP];

    int qt_even = 0;

    int i;

    printf("\n");
    for (i = 0; i < CAP; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &nums[i]);
        
        if (nums[i] % 2 == 0) qt_even += 1;
    }

    printf("\nQuantity of even numbers: %d.\n\n", qt_even);
}

