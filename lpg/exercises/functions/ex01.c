/*
Criar um programa fazendo uso de programação modular (funções) onde o 
usuário digite a temperatura em Celsius e o programa mostre a temperatura 
em Fahrenheit e Kelvin.

Celsius a Fahrenheit → °f = 9/5 (°c) + 32
Celsius a Kelvin → k = ° c + 273
*/

#include <stdio.h>

float temp_convert(float celsius);

int main(int argc, char *argv[]) {
    float celsius, fahrenheit;
    printf("Temperatura teste em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = temp_convert(celsius);

    printf("%.1f graus Celsius = %.1f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}

float temp_convert(float celsius) {
    // (0 °C × 9/5) + 32 = 32 °F
    return celsius * ((float)9/(float)5) + (float)32;
}

