#include <stdio.h>

int max(int x, int y, int z);

int main(int argc, char *argv[]) {
    int x, y, z;
    printf("\nEnter three numbers between spaces: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("\nLargest number entered: %d\n\n", max(x, y, z));

    return 0;
}

int max(int x, int y, int z) {
    int largest = x;

    if (y > largest)
        largest = y;
    if (z > largest)
        largest = z;

    return largest;
}

