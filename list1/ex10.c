#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int** count_notes(int money, int banknotes[], size_t banknotes_qt) {
    int **money_banknotes = (int **)malloc(sizeof(int *) * banknotes_qt);

    if (money_banknotes == NULL) {
        printf("Error.");
        exit;
    }

    int value = money;

    for (int i = 0; i < banknotes_qt; i++) {
        money_banknotes[i] = (int *)malloc(sizeof(int)*2);
        money_banknotes[i][0] = banknotes[i];
        money_banknotes[i][1] = floor(value / banknotes[i]);
        value %= banknotes[i];
    }

    return money_banknotes;
}

int main() {
    int money;
    int banknotes[] = {50, 20, 10, 5, 2, 1};
    int num_banknotes = sizeof(banknotes) / sizeof(banknotes[0]);

    printf("\nMoney: $ ");
    scanf("%d", &money);

    int **notes = count_notes(money, banknotes, num_banknotes);

    for (int i=0; i < num_banknotes; ++i) {
        printf("\n$%2d -> %3d note(s)", notes[i][0], notes[i][1]);
    }

    printf("\n\n");
}

