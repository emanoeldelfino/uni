#include <stdio.h>
#include <math.h>

int main() {
    int n1, n2, n3, biggest;

    printf("\nNumber 1: ");
    scanf("%d", &n1);

    printf("Number 2: ");
    scanf("%d", &n2);

    printf("Number 3: ");
    scanf("%d", &n3);

    biggest = n1;

    if(n2 > biggest) {
        biggest = n2;
    }
    if (n3 > biggest) {
        biggest = n3;
    }

    printf("\nThe biggest number between %d, %d and %d is %d.\n\n", n1, n2, n3, 
                                                                biggest);
}

