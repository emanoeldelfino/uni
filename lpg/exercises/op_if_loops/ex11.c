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

int main(int argc, char *argv[]) {
    for (int i = 1; i <= 5; i++)
        printf("*\n%.*s", i, "$$$$$");
    printf("\n");
    return 0;
}

