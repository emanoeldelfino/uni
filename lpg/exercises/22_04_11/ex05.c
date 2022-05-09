/*
Criar um programa que gere um número aleatório inteiro entre 1 e 10. Depois usuário
tentará adivinhar o número. As seguintes mensagens devem ser mostradas de acordo com o 
número inserido:
- Bom trabalho, adivinhou! O número era x;
- Sorte para próxima! O número é inferior a x;
- Sorte para próxima! O número é maior a x.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    int rand_num = (rand() % 10) + 1;
    int user_num;

    do {
        printf("Tente adivinhar um numero entre 1 e 10: ");
        scanf("%d", &user_num);
        if (user_num <= 0 || user_num > 10) {
            printf("Numero invalido.\n");
        }
    } while (user_num <= 0 || user_num > 10);

    printf("");

    if (user_num == rand_num) {
        printf("Bom trabalho, adivinhou! O numero era %d.", rand_num);
    } else if (rand_num < user_num) {
        printf("Sorte para proxima! O numero eh inferior a %d.", user_num);
    } else {
        printf("Sorte para proxima! O numero eh maior a %d.", user_num);
    }

    return 0;
}

