#include <stdio.h>

#define N 10

int main(int argc, char *argv[]) {
    int a[] = {6, 9, 4, -3, 17, 22, 13, 81, 44, 32};
    //int n = 10, key;
    int key;
    printf("Type a value for searching: ");
    scanf("%d", &key);

    int found = 0;
    int i;
    for ( i = 0; i < N; i++) {
        if(a[i] == key) {
            printf("Found in %i\n", i);
            found = 1;
        }
    }

    if (!found) printf("Not found!\n");
}
