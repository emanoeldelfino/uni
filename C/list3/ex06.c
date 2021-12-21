#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    char s;
    float h, tall_m = 0;
    float avg_wh, sum_wh = 0, nw = 0;
    
    do {
        printf("\nNumber of people: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 0; i < n; i++) {
        do {
            printf("\nSex of person %d (M/F): ", i+1);
            scanf(" %c", &s);
        } while (s != 'M' && s != 'F');

        do {
            printf("Height of person %d (m): ", i+1);
            scanf("%f", &h);
        } while (h <= 0);

        if (s == 'M' && h > tall_m) tall_m = h;
        if (s == 'F') {
            nw++;
            sum_wh += h;
        }
    }

    printf("\n");

    if (tall_m != 0) printf("The tallest man height is %.2f.\n", tall_m);
    if (nw != 0) {
        avg_wh = (float)sum_wh / (float)nw;
        printf("The average woman height is %.2f.\n", avg_wh);
    }
}

