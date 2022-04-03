#include <stdio.h>

#define CAP 30

int main(int argc, char *argv[]) {
    int nums[CAP], sum = 0, qt = 0, sum_avg = 0;
    int i;

    printf("\n");
    for (i = 0; i < CAP; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &nums[i]);

        sum += nums[i];
    }

    float average = (float)sum / CAP;

    printf("\nAverage of the numbers: %.2f.", average);
    printf("\nValues above average: ");

    for (i = 0; i < CAP; i++) {
        if (nums[i] > average) {
            qt++;
            printf("%d(%d) ", nums[i], i+1);
            sum_avg += nums[i];
        }
    }

    printf("\nSum of numbers above average: %d.", sum_avg);

    float percent = ((float)qt / CAP) * 100;

    printf("\nPercentage above average: %.2f%%.\n\n", percent);
}

