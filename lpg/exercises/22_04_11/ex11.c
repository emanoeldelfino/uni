/*
- Escrever um programa que crie o seguinte padrão:
*
$*
$$*
$$$*
$$$$*
$$$$$ 
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("\n");
    for (int i = 0; i <= 5; i++) {
        printf("%.*s%c\n", i, "$$$$$", i < 5 ? '*' : ' ');
    }
    printf("\n");
}

