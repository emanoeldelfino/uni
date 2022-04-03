#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;

    printf("Número: ");
    scanf("%d", &n);

    printf("\nBinário: %b", n);
    printf("\nOctal: %o", n);
    printf("\nHexadecimal: %x\n", n);
}

