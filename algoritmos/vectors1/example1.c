#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int v[10], i;

    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &v[i]);
    }

    printf("\nVector values:\n");
    for (i = 0; i < 1000000; i++) 
        printf("%d: %d\n", i+1, v[i]);

    return 0;
}
