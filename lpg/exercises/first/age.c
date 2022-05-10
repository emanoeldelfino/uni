#include <stdio.h>

int main() {
    int age, days, hours, minutes;
    float centuries, decades;
    long seconds, milliseconds;

    do {
        printf("Idade (anos): ");
        scanf("%d", &age);
    } while (age < 1 || age > 100);

    centuries = (float)age / (float)100;
    decades = (float)age / (float)10;
    days = age * 365;
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;
    milliseconds = seconds * 1000;

    printf("\nSua idade em diferentes unidades de tempo: ");
    printf("\nSéculos: %.2f.", centuries);
    printf("\nDécadas: %.2f.", decades);
    printf("\nDias: %d.", days);
    printf("\nHoras: %d.", hours);
    printf("\nMinutos: %d.", minutes);
    printf("\nSegundos: %ld.", seconds);
    printf("\nMilissegundos: %ld.\n\n", milliseconds);
}

