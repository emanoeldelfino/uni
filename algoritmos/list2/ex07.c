#include <stdio.h>
#include <math.h>

int main() {
    int n1, n2;
    float result;

    printf("\nNumber 1: ");
    scanf("%d", &n1);
    printf("Number 2: ");
    scanf("%d", &n2);

    int remainder = n2 != 0 ? n1 % n2 : 0; 

    printf("\nn1 %% n2 = %d.\n\n", remainder);

    switch (remainder) {
        case 1:
            result = (n1 + n2) + (n1 % n2);
            printf("(Number 1 + Number 2) + (Number 1 %% Number 2) = ");
            printf("(%d + %d) + (%d %% %d) = (%d) + (%d) = %.0f.", n1, n2, n1, n2, n1 + n2, n1 % n2, result);
            break;
        case 2:
            printf("Number 1 %d is %s.\n", n1, n1 % 2 == 0 ? "even" : "odd");
            printf("Number 2 %d is %s.", n2, n2 % 2 == 0 ? "even" : "odd");
            break;
        case 3:
            result = (n1 + n2) * n1;
            printf("(Number 1 + Number 2) * Number 1 = ");
            printf("(%d + %d) * %d = %.0f.", n1, n2, n1, result);
            break;
        case 4:
            result = (n1 + n2 + 0.0) / n2;
            printf("(Number 1 + Number 2) / Number 2 = ");
            printf("(%d + %d) / %d = %.1f.", n1, n2, n2, result);
            break;
        default:
            printf("(Number 1 %2d) ^ 2: %.0f.", n1, pow(n1, 2));
            printf("\n(Number 2 %2d) ^ 2: %d.", n2, (int)(pow(n2, 2)));
            break;
    } 

    printf("\n\n");
}

