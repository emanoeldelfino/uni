#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int v[] = {1, 3, 5, 7, 9, 11, 13, 15 };
    int i;

    printf("\nVector size in memory: %i bytes.\n\n", sizeof(v));

    int n = sizeof(v) / sizeof(int);

    for (i = 0; i < n; i++) {
        printf("%d -> %d\n", i, v[i]);
    }
}
