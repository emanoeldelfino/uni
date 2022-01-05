#include <stdio.h>
#include <stdlib.h>

void clearscr(void) {
    #ifdef _WIN32
        system("cls");
    #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
        system("clear");
    #else
        #error "OS not supported."
    #endif
}

int main(int argc, char *argv[]) {
    float n1, n2, result;
    int option;
    char op;

    clearscr();
    do {
        printf("\n1 - Sum (+);");
        printf("\n2 - Subtraction (-);");
        printf("\n3 - Multiplication (x);");
        printf("\n4 - Division (/);");
        printf("\n5 - Exit.");

        printf("\n\nNumber 1: ");
        scanf("%f", &n1);

        printf("\nNumber 2: ");
        scanf("%f", &n2);

        printf("\nOption: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                result = n1 + n2;
                op = '+';
                break;
            case 2:
                result = n1 - n2;
                op = '-';
                break;
            case 3:
                result = n1 * n2;
                op = 'x';
                break;
            case 4:
                result = n1 / n2;
                op = '/';
                break;
            case 5:
                printf("\nExiting...\n\n");
                break;
            default:
                printf("\nInvalid option.\n");
                break;
        }

        if (option >= 1 && option <= 4) {
            clearscr();
            printf("\n%.2f %c %.2f = %.2f.\n", n1, op, n2, result);
        }
    } while (option != 5);
}

