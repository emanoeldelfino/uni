#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int bar_code, i = 0;

    printf("Enter barcode first 12 digits: ");
    scanf("%i", &bar_code);

    int bar_code_digits = floor(log10(abs(bar_code))) + 1;

    if (bar_code > 0 && bar_code_digits == 12) {
        int digits = bar_code, digit;

        while (digits != 0) {
            digit = digits % 10;
            digits /= 10;

            printf("%i -> %i", i, digit);

            i++;
        }
    } else {
        printf("Invalid number of digits for bar code %i.", bar_code);
    }
}
