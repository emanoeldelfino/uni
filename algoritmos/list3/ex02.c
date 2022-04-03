#include <stdio.h>

int main() {
    int x, y, start, end, sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &x);

    printf("\nEnter another number: ");
    scanf("%d", &y);
    
    printf("\n");

    if (x > y) {
        start = y;
        end = x;
    } else {
        start = x;
        end = y;
    }

    start += (start + 1) % 2 == 0 ? 2 : 1;

    for (int i = start; i < end; i += 2) { 
        printf("%s%i%s%s", i < 0 ? "(" : "", i, i < 0 ? ")" : "", i < end - 1 ? " + " : "");
        if (i % 2 != 0) {
            sum += i; 
        }
    }

    printf(" = %i.\n", sum);
}

