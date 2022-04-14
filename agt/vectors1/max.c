#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main(int argc, char *argv[]) {
    float v[MAX];
    int i;

    for (i = 0; i < MAX; i++) {
        printf("Type the value %d: ", i+1);
        scanf("%f", &v[i]);
    }


    printf("\nVector values: ");
    for (i = 0; i < MAX; i++) {
        printf("%.2f ", v[i]);
    }

    printf("\n\n");

    float sum = 0;
    for (i = 0; i < MAX; i++) {
        sum += v[i];
    }
    float average = sum / MAX; // it could be sum / i

    printf("Average of vector is %.3f.\n", average);

    printf("\nValues above average are: ");

    for (i = 0; i < MAX; i++) {
        if (v[i] > average)
            printf("%.2f ", v[i]);
    }

    printf("\n");

    return 0;
}
