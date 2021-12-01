#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;

    printf("\nNumber: ");
    scanf("%d", &num);

    printf("\nThe number %d is %s the allowed range.\n\n", num, 
            num >= 1 && num <= 9 ? "within" : "out of");
}

