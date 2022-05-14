/*
Criar um programa onde o usuário digite a temperatura em Celsius e o programa mostre
a temperatura em Fahrenheit e Kelvin.

Celsius a Fahrenheit -> °f = 9/5 (°C) + 32
Celsius a Kelvin -> k = ° c + 273
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float celsius, fahrenheit, kelvin;
    char ch = 248;

    printf("Temperatura teste em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (((float)9 / (float)5) * celsius) + (float)32;
    kelvin = celsius + (float)273.15;

    printf("\n%.2f%c C = %.2f%c F = %.2f%c K\n", celsius, ch, fahrenheit, ch, kelvin, ch);
    //printf("%.2f° C = %.2f° F = %.2f° K", celsius, fahrenheit, kelvin);

    return 0;
}

