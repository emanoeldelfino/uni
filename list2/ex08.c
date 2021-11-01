#include <stdio.h>
#include <string.h>

int main() {
    char employee_name[20];
    float salary;
    int raise_percent;

    printf("\nEmployee name: ");
    scanf("%[^\n]", employee_name);

    printf("Salary: $ ");
    scanf("%f", &salary);

    if (salary <= 400) {
        raise_percent = 15;
    } else if (salary <= 700) {
        raise_percent = 12;
    } else if (salary <= 1000) {
        raise_percent = 10;
    } else if (salary <= 1800) {
        raise_percent = 7;
    } else if (salary <= 2500) {
        raise_percent = 4;
    } else {
        raise_percent = 0;
    }

    float new_salary = salary + (salary * ((float)raise_percent / 100));

    printf("\nEmployee name: %s.", employee_name);
    printf("\n%% of raise: %d.", raise_percent);
    printf("\nActual salary: $ %.02f.", salary);
    printf("\nNew salary: $ %.02f.\n\n", new_salary);
}

