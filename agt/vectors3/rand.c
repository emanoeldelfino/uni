#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main(int argc, char *argv[]) {
    // define the "seed" that starts the generation of the pseudo-random numbers.
    srand(time(0));

    int v[N];
    int i;

    for ( i = 0; i < N; i++) {
        v[i] = rand(); // Generates a pseudo-random number
    }

    for ( i = 0; i < N; i++ )
        printf("%i: %i\n", i, v[i]);

    return 0;
}
