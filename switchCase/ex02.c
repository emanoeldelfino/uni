#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int product_code;
    
    printf("\nCode of the product: ");
    scanf("%d", &product_code);

    printf("\n");

    switch (product_code) {
        case 1:
            printf("Non-perishable food.");
            break;
        case 2:
        case 3:
        case 4:
            printf("Perishable food.");
            break;
        case 5:
        case 6:
            printf("Clothes.");
            break;
        case 8 ... 15:
            printf("Hygiene.");
            break;
        default:
            printf("Error: code of the product is invalid!");
            break;
    }

    printf("\n\n");
}

