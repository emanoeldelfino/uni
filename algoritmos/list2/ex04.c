#include <stdio.h>

float sum_float_arr(float arr[], int size) {
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    float grades[4], average;
    
    printf("\n");

    for(int i = 0; i < 4; i++) {
        printf("Grade %d: ", i + 1);
        scanf("%f", &grades[i]);
    }

    average = sum_float_arr(grades, 4) / 4;

    printf("\n");

    if (average >= 7) {
        printf("You passed!");
    } else {
        float retake_grade;

        printf("Retake test grade (your average was %.02f): ", average);
        scanf("%f", &retake_grade);

        average = (sum_float_arr(grades, 4) + retake_grade) / 5;

        printf("\n");

        if (average >= 5) {
            printf("You passed the retake test.");
        } else {
            printf("You didn't pass the retake test.");
        }
    }

    printf("\n\nFinal average: %.02f.\n\n", average);
}

