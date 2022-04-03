#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    int terms;
    double sum = 3;
    double numerator = 4;
    long den = 2;
    bool is_term_odd;

    printf("\n");
    do {
        printf("Number of terms: ");
        scanf("%d", &terms);
    } while (terms <= 0);

    printf("π = 3 %c ", terms > 1 ? '+' : '=');

    int i;
    for (i = 1; i < terms; i++) {
        is_term_odd = (i % 2);
        printf(" (4 / (%ld x %ld x %ld)) %c ", 
                den, den + 1, den + 2, i < terms - 1 ? 
                                         is_term_odd ? '-' : '+'
                                                     : '=');
        sum += (numerator / (den * (den + 1) * (den + 2))) * 
                (is_term_odd ? 1 : -1);
        den += 2;
    }
    printf("\n%.18lf\n", sum);
}

