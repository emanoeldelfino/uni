#include <stdio.h>
#include <stdbool.h>

float convert_temp(float temp, bool out_f) {
    return out_f ? (temp - 32) * 5 / 9 : (temp * 9 / 5) + 32;
}

int main() {
    float celsius, farenheit;

    printf("\nEnter Farenheit temperature: ");
    scanf("%f", &farenheit);

    celsius = convert_temp(farenheit, true);
    
    printf("\n%.2f°F is %.2f°C.\n\n", farenheit, celsius);
}

