#include <stdio.h>
#include <math.h>

char* is_even_or_odd(int number) {
    return number % 2 == 0 ? "even": "odd";
}

int main() {
    int num;

    printf("\nNumber: ");
    scanf("%d", &num);

    printf("\n");

    if(num < 0) {
        printf("Invalid: The number is negative.");
    } else {
        printf("The number %d is %s.", num, is_even_or_odd(num));
    }
    printf("\n\n");
}

