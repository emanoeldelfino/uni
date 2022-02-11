#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int nums[20];

    int qt_even = 0;

    int i;

    srand(time(NULL));

    for (i = 0; i < 20; i++) {
        nums[i] = rand() % 11;
        printf("%.2d. %2d\n", i + 1, nums[i]);
        if (nums[i] % 2 == 0) qt_even++;
    }

    printf("\nQuantity of even numbers is %d.\n", qt_even);
}

