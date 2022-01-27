#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int nums[20];

    int i;

    srand(time(NULL));

    for (i = 0; i < 20; i++) {
        nums[i] = rand() % 100;
    }

    for (i = 0; i < 20; i++) {
        printf("%.2d. %2d\n", i + 1, nums[i]);
    }
}

