#include <stdio.h>

int main() {
    char employee_name[20];
    int working_hours;
    float salary_hour;
    float salary;

    printf("\nName of the employee: ");
    scanf("%s", &employee_name);

    printf("Working hours of %s: ", employee_name);
    scanf("%d", &working_hours);

    printf("Enter the salary/hour: $");
    scanf("%f", &salary_hour);

    // calculating
    salary = working_hours * salary_hour;

    printf("\nThe salary of %s is $%.2f.\n", employee_name, salary);

    return 0; 
}

