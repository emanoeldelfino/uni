#include <stdio.h>

int main(int argc, char *argv[]) {
    int n, count_no = 0, count_yes = 0, count_f = 0, count_m = 0;
    int count_f_yes = 0, count_m_no = 0;
    char s, a;

    do {
        printf("\nNumber of the people will participate in the research? ");
        scanf("%d", &n);
    } while (n <= 0);

    int i;
    for (i = 0; i < n; i++) {
        do {
            printf("\nSex (M/F): ");
            scanf(" %c", &s);

            if (s == 'M') {
                count_m += 1;
            } else if (s == 'F') {
                count_f += 1;
            } else {
                printf("\nInvalid sex.\n");
            }
        } while (s != 'M' && s != 'F');

        do {
            printf("Did you like the new product launched in the market? (Y/N): ");
            scanf(" %c", &a);

            if (a == 'Y') {
                count_yes += 1;
                if (s == 'F') {
                    count_f_yes += 1;
                }
            } else if (a == 'N') {
                count_no += 1;
                if (s == 'M') {
                    count_m_no += 1;
                }
            } else {
                printf("\nInvalid answer.\n");
            }
        } while (a != 'Y' && a != 'N');
    }

    float perc_f_yes, perc_m_no;
    if (count_f > 0)
        perc_f_yes = ((float)count_f_yes / count_f) * 100;
    else
        perc_f_yes = 0;

    if (count_m > 0)
        perc_m_no = ((float)count_m_no / count_m) * 100;
    else
        perc_m_no = 0;

    printf("\nNumber of people that answered yes: %d.", count_yes);
    printf("\nNumber of people that answered no: %d.", count_no);
    printf("\nPercentage of women that answered yes: %.2f%%.", perc_f_yes);
    printf("\nPercentage of men that answered no: %.2f%%.\n", perc_m_no);
}

