#include <stdio.h>

int main() {
    int x, y, start, end;
    float c;

    printf("\nFarenheit temperature for interval: ");
    scanf("%d", &x);

    printf("\nAnother one: ");
    scanf("%d", &y);

    if (x > y) {
        start = y;
        end = x;
    } else {
        start = x;
        end = y;
    }

    printf("_____________________________\n");
    for (int f = start; f <= end; f += 2) {
        c = (f - 32) * 5/9;
        
        printf("| %6d°C       | %6.2f°F |\n", f, c);
    }
    printf("_____________________________\n\n");
}

