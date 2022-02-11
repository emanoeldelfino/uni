#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char * vectorToString(float vector[], int vector_len, char sep[]) {
    char str_aux[10] = "";
    char str[1000] = "";

    int i;
    for (i = 0; i < vector_len; i++) {
        snprintf(str_aux, 10, "%.0f%s", vector[i], i < vector_len - 1 ? sep : "");
        strcat(str, str_aux);
    }

    // Dynamically allocate the string
    char *result = malloc(strlen(str) + 1);

    // Deep-copy the string from temporary buffer to return value buffer 
    strcpy(result, str);

    return result;
}

int gcd(int n1, int n2) {
    int i;
    for (i = n1 > n2 ? n1 : n2; i > 0; i--) {
       if (n1 % i == 0 && n2 % i == 0) {
           return i;
       }
    }
}

char * simp(int n1, int n2) {
    char str[50];
    int gcd_value = gcd(n1, n2);
    snprintf(str, 50, "%d / %d", n1 / gcd_value, n2 / gcd_value);
    char *result = malloc(strlen(str) + 1);
    strcpy(result, str);
    return result;
}

int main(int argc, char *argv[]) {
    float x[MAX], y[MAX];
    float sum_x = 0, sum_y = 0, sum_xy = 0, sum_x_sqr = 0;
    float sum_xy_v[MAX], sum_x_sqr_v[MAX];
    int num_points;
    
    printf("\n");
    do {
        printf("Number of coordinates (between 1 and %d): ", MAX); 
        scanf("%d", &num_points);
    } while (num_points < 1 || num_points > MAX);

    int i;
    printf("\n");
    for (i = 0; i < num_points; i++) {
       printf("Coordinate %d (x, y): ", i+1);
       scanf("%f %f", &x[i], &y[i]);

       sum_x += x[i];

       sum_y += y[i];

       sum_xy_v[i] = x[i] * y[i];
       sum_xy += sum_xy_v[i];

       sum_x_sqr_v[i] = x[i] * x[i];
       sum_x_sqr += sum_x_sqr_v[i];
    }

    float a_denominator = (num_points * sum_x_sqr) - (sum_x * sum_x);

    char a_denominator_str[25];
    snprintf(a_denominator_str, 25, "((%d x %.0f) - (%.0f x %.0f))", num_points, sum_x_sqr, sum_x, sum_x);

    float a0_numerator = (sum_y * sum_x_sqr) - (sum_x * sum_xy);
    float a1_numerator = (num_points * sum_xy) - (sum_x * sum_y);

    float a0 = a0_numerator / a_denominator;
    float a1 = a1_numerator / a_denominator;

    // cut decimals off without rounding
    int tmp = a0 * 1000000;
    a0 = tmp / 1000000.0;
    tmp = a1 * 1000000;
    a1 = tmp / 1000000.0;

    char * str_x = vectorToString(x, num_points, ", ");
    char * str_y = vectorToString(y, num_points, ", ");

    int str_xy_len = strlen(str_x) > strlen(str_y) ? 
                        strlen(str_x) : strlen(str_y);

    char * str_sum_x = vectorToString(x, num_points, " + ");
    char * str_sum_y = vectorToString(y, num_points, " + ");
    char * str_sum_xy = vectorToString(sum_xy_v, num_points, " + ");
    char * str_sum_x_sqr = vectorToString(sum_x_sqr_v, num_points, " + ");

    int str_sum_len = strlen(str_sum_xy) > strlen(str_sum_x_sqr) ?
                        strlen(str_sum_xy) : strlen(str_sum_x_sqr);

    printf("\nX = { %-*s }", str_xy_len, str_x);
    printf("\nY = { %-*s }", str_xy_len, str_y);

    printf("\n");

    printf("\nSX  = %-*s = %.0f", str_sum_len, str_sum_x, sum_x);
    printf("\nSY  = %-*s = %.0f", str_sum_len, str_sum_y, sum_y);
    printf("\nSXY = %-*s = %.0f", str_sum_len, str_sum_xy, sum_xy);
    printf("\nSX2 = %-*s = %.0f", str_sum_len, str_sum_x_sqr, sum_x_sqr);
    
    printf("\n");

    char * a0_simp = simp(a0_numerator, a_denominator);
    char * a1_simp = simp(a1_numerator, a_denominator);

    printf("\na0 = ((%.0f . %.0f) - (%.0f . %.0f)) / %s = %.0f / %.0f = %s",
            sum_y, sum_x_sqr, sum_x, sum_xy, a_denominator_str,
            a0_numerator, a_denominator, a0_simp);
    
    printf("\na1 = ((%d . %.0f) - (%.0f . %.0f)) / %s = %.0f / %.0f = %s",
            num_points, sum_xy, sum_x, sum_y, a_denominator_str,
            a1_numerator, a_denominator, a1_simp);

    printf("\n");

    printf("\ny = %s . x + %s", a1_simp, a0_simp);

    printf("\n");

    printf("\ny = %f . x + %f", a1, a0);

    printf("\n");

    printf("\nAverage X = %.1f / %d =  %.1f", sum_x, num_points, sum_x / num_points);
    printf("\nAverage Y = %.1f / %d =  %.1f", sum_y, num_points, sum_y / num_points);

    printf("\n");
    return 0;
}
