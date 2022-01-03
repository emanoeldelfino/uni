#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char *argv[]) {
    int v[N] = { 5, 7, 8, 3, -12, 0, 99, -1, 42, 78 };

    int i;

    printf("\nOriginal vector: ");
    for ( i = 0; i < N; i++ )
        printf("%d ", v[i]);
    printf("\n");

    // Selection Sorting
   
    for ( i = 0; i < N-1; i++ ){
        int j, i_small = i;
        for ( j = i+1; j < N; j++ ) {
            if ( v[j] < v[i_small] )
                i_small = j;
        }

        // Switch smallest value (selected) for i
        int aux = v[i];
        v[i] = v[i_small];
        v[i_small] = aux;

        // Show the vector partially sorted until index i
        printf("\nSorted until %d: ", i);
        for (j = 0; j < N; j++)
            printf("%d ", v[j]);
    }

    printf("\n\nSorted: ");
    for (i = 0; i < N; i++)
        printf("%d ", v[i]);
    printf("\n");

    //printf("Smallest value (index %d): %d\n", i_small, v[i_small]);
    
    return 0;
}

