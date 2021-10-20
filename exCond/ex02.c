#include <stdio.h>
#include <math.h>

int main() {
    float salary;
    float loan;
    char *check;

    printf("\nSalary: $ ");
    scanf("%f", &salary);

    printf("Loan: $ ");
    scanf("%f", &loan);

    printf("\n");

    check = loan <= (salary * 5) ? "Your loan was approved!" : "You don't \
meet the requirements for this loan.";
    printf("%s", check);

    printf("\n\nThe maximum loan for your salary of $ %.2f is $ %.2f.", 
                                                    salary, salary * 5);

    printf("\n\nThanks for consulting us!\n\n");
}

