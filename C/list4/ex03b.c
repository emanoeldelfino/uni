#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    int terms;
    double sum = 0;
    int denominator = 1;

    printf("\n");
    do {
        printf("Number of terms: ");
        scanf("%d", &terms);
    } while (terms <= 0);

    printf("π = ");

    int i;
    for (i = 0; i < terms; i++) {
        bool is_term_odd = (i % 2); // 5 % 2 -> true, 2 % 2 -> false
        sum += ((double)4 / denominator) * (is_term_odd ? -1 : 1);
        printf("4 / %d %c ", denominator, i == terms - 1 ? '=' : 
                                             is_term_odd ? '+' : '-');
        denominator += 2;
    }
    printf(" %lf\n", sum);
}

