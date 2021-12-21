#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char name1[] = {'J', 'o', 'a', 'n', 'a'};

    char name2[] = "Marley";

    int i;

    for (i = 0; i < 5; i++) {
        printf("Char %i of name 1 is %c.\n", i+1, name1[i]);
    }

    printf("\n");

    for (i = 0; i < 6; i++) {
        printf("Char %i of name 2 is %c.\n", i+1, name2[i]);
    }
}
