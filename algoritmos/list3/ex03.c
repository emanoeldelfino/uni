#include <stdio.h>

int main(int argc, char *argv[]) {
    int n, v, largest, smallest;

    printf("\n");
    do {
        printf("Number of values: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("\nEnter value 1: ");
    scanf("%d", &v);

    largest = smallest = v;

    for (int i = 1; i < n; i++) {
        printf("Enter value %d: ", i+1);
        scanf("%d", &v);

        if (v < smallest) smallest = v;
        if (v > largest) largest = v;
    }

    int amplitude = largest - smallest;

    printf("\nSmallest: %d\n", smallest);
    printf("Largest: %d\n", largest);
    printf("Amplitude: %d\n\n", amplitude);
}

