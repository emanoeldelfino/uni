#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;

    printf("\nEnter a number (0 to stop): ");
    scanf("%d", &n);
    int l = n;

    while (n != 0) {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);

        if (n > l)
            l = n;
    }

    printf("\nThe largest number entered was %d.\n\n", l);
}
