#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float *percentageOf(float base_value, float arr[], size_t arr_size) {
    float *percents = malloc(sizeof(float) * arr_size);

    if (percents == NULL) {
        printf("Error.");
        exit; 
    }

    for (int i = 0; i < arr_size; i++) {
        percents[i] = base_value * (arr[i] / 100); 
    }

    return percents;
}

float sumArr(float arr[], size_t arr_size) {
    float sum = 0;
 
    for (int i=0; i < arr_size; i++) {
        sum += arr[i];
        printf("%.2f\n", sum);
    }

    return sum;
}

int main() {
    float gross_salary;

    float taxes_percent[3] = {15, 11, 3};
    char *taxes_str[3];
    taxes_str[0] = "Income Tax";
    taxes_str[1] = "INSS";
    taxes_str[2] = "Labor Syndicate";

    printf("\nGross salary: $ "); 
    scanf("%f", &gross_salary);

    float *taxes_value = percentageOf(gross_salary, taxes_percent, 3);
    float tax_total = sumArr(taxes_percent, 3);
    float tax_total_val = sumArr(taxes_value, 3);
    float net_salary = gross_salary - tax_total_val;

    for(int i=0; i < 3; i++) {
        printf("\n(-) %-15s (%2.0f%) : $ %7.2f", taxes_str[i], taxes_percent[i], taxes_value[i]);
    }
    
    printf("\n\n(-) %-15s (%2.0f%) : $ %7.2f", "Total", tax_total_per, tax_total_val);

    printf("\n\nNet Salary : $%.2f\n\n", net_salary);
}

