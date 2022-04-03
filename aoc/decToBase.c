#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MIN 2 
#define MAX 36

int main() {
    double number, fractional;
    unsigned int base, remainder;
    char chars[MAX] = "", converted[256] = "", aux[256] = "", character;
    long integral;

    for (character = '0'; character <= '9'; character++) {
        strncat(chars, &character, 1);        
    }

    for (character = 'A'; character <= 'Z'; character++) {
        strncat(chars, &character, 1); 
    }

    do {
        printf("Número (maior ou igual a 0): ");
        scanf("%lf", &number);
    } while (number < 0);

    integral = (long)number;
    fractional = number - integral;

    do {
        printf("Base (2 a 36): ");
        scanf("%d", &base);
    } while (base < MIN || base > MAX);

    int divisor = base;

    int dividend = integral;

    while (dividend > 0) {
        remainder = dividend % divisor;
        dividend = dividend / divisor;
        strcpy(aux, converted);
        strncpy(converted, &chars[remainder], 1);
        converted[1] = '\0';
        strcat(converted, aux);
        converted[strlen(converted)] = '\0';
    }

    if (fractional > 0) {
        strncat(converted, ".", 2);
        int i = 0;
        while (fractional > 0) {
            fractional = fractional * base;
            remainder = (int)fractional;
            fractional = fractional - remainder;
            strncat(converted, &chars[remainder], 1);
            i++;
        }
    }

    printf("\n%lf = %s (%d)\n\n", number, converted, base);
}

