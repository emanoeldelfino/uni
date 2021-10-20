#include <stdio.h>
#include <stdlib.h>

int sumArr(int arr[], size_t arr_size) {
    int sum = 0;

    for (int i = 0; i < arr_size; i++) {
        sum += arr[i];
    }

    return sum;
}

float *percentageOf(int arr[], size_t arr_size) {
    float *percents = malloc(sizeof(float) * arr_size);

    if (percents == NULL) {
        printf("Error.");
        exit; 
    }

    int sum = sumArr(arr, arr_size);

    for (int i = 0; i < arr_size; i++) {
        percents[i] = ((float)arr[i] / sum) * 100; 
    }

    return percents;
}

int main() {
    const char *votes[3];
    votes[0] = "Blank";
    votes[1] = "Spoiled";
    votes[2] = "Valid";

    int votes_count[3];

    size_t size_votes = sizeof(votes) / sizeof(votes[0]);

    printf("\n");

    for (int i = 0; i < size_votes; i++) {
        printf("Enter the number of %s ballot(s): ", votes[i]);
        scanf("%d", &votes_count[i]);
    }

    float *votes_percent = percentageOf(votes_count, size_votes); 

    printf("\n");

    for (int i = 0; i < size_votes; i++) {
        printf("%8s | %5d | %.2f%\n", votes[i], votes_count[i], votes_percent[i]);
    }
    printf("\n%8s | %5d | %.2f%\n", "Total", sumArr(votes_count, 3), 100.0);
}

