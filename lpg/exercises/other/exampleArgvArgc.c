#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    printf("Quantidade de argumentos passados: %d.\n", argc);

    for (i = 0; i < argc; i++) {
        printf("Argumento %d: %s\n", i + 1, argv[i]);
    }
}

