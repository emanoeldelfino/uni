#include <stdio.h>

#define CAP 30

int main(int argc, char *argv[]) {
    int nums[CAP], qt = 0, sum = 0;
    int i;

    printf("\n");
    for (i = 0; i < CAP; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &nums[i]);

        if (nums[i] % 2 != 0 && nums[i] > 10) {
            qt++;
            sum += nums[i];
        }
    }

    float average = sum / qt;

    printf("\nAverage of odd numbers greater than 10 is %.2f.\n", average);
}

