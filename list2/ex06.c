#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int option;
    float n1, n2, result;
    bool invalid = false;
    
    printf("\nNumber 1: ");
    scanf("%f", &n1);
    printf("Number 2: ");
    scanf("%f", &n2);

    printf("\nOperations");
    printf("\n1 - Sum;");
    printf("\n2 - Subtraction;");
    printf("\n3 - Multiplication;");
    printf("\n4 - Division.");
    printf("\n\nOption: ");
    scanf("%d", &option);

    printf("\n");

    switch (option) {
        case 1:
            result = n1 + n2;
            break;
        case 2:
            result = n1 - n2;
            break;
        case 3:
            result = n1 * n2;
            break;
        case 4:
            if (n2 != 0) {
                result = n1 / n2;
            } else {
                invalid = true; 
                printf("Invalid: Zero division.");
            }
            break;
        default:
            invalid = true;
            printf("Invalid: Unknown option.");
            break;
    }

    if (!invalid) {
        printf("Result of the operation: %.02f.", result);
    }

    printf("\n\n");
}

