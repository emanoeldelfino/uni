#include <stdio.h>
#include <stdlib.h>

int sum_int_arr(int arr[], int size) {
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

float average_int_arr(int arr[], int size) {
    return sum_int_arr(arr, size) / size;
}

int * greater(float num, int arr[], int size) {
    int q = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > num) {
            q++;
        } 
    }

    int *greater_values = (int *)malloc(q + 1 * sizeof(int));
    greater_values[0] = q;

    q = 1;
    for (int i = 0; i < size; i++) {
        if (arr[i] > num) {
            greater_values[q] = arr[i];
            q++;
        }
    }
    
    return greater_values;
}

int main() {
    int nums[5];
    
    printf("\n");

    for(int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    float average_nums = average_int_arr(nums, 5);

    printf("\nAverage: %.02f.\n", average_nums);

    int *greater_average = greater(average_nums, nums, 5);
    int greater_av_size = greater_average[0];

    printf("\nNumbers that are greater than the average | ");

    for(int i = 1; i < greater_av_size + 1; i++) {
        printf("%d | ", greater_average[i]);
    }
    printf("\n\n");
}

