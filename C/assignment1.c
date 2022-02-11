#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include <string.h>

bool is_leap_year(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int readInt(char *msg, char *data, int min, int max, bool zero_exit) {
    int input;

    do {
        printf("%s%s: ", msg, zero_exit ? " (0 to exit)": "");
        scanf("%d", &input);
        if (zero_exit && input == 0) exit(1);
    
        if (input < min || input > max) {
            printf("\nInvalid %s.\n", data);
        }
    } while (input < min || input > max);

    return input;
}

int main(int argc, char *argv[]) {
    int day = readInt("\nDay", "day", 1, 31, true);
    int month = readInt("Month", "month", 1, 12, true);
    int year = readInt("Year", "year", 1800, 2199, true);

    int last2DigitsYear = year % 100;

    int div = (int)(last2DigitsYear / 4);

    bool is_leap = is_leap_year(year);

    int month_key;
    switch (month) {
        case 1:
        case 10:
            month_key = 1;
            break;
        case 2:
        case 3:
            month_key = 4;
            break;
        case 4:
        case 7:
            month_key = 0;
            break;
        case 5:
            month_key = 2;
            break;
        case 6:
            month_key = 5;
            break;
        case 8:
            month_key = 3;
            break;
        case 9:
        case 12:
            month_key = 6;
            break;
    }

    if(is_leap_year(year) && (month == 1 || month == 2)) {
        month_key -= 1;         
    }

    int century_key;
    switch (year) {
        case 1800 ... 1899:
            century_key = 2;
            break;
        case 1900 ... 1999:
            century_key = 0;
            break;
        case 2000 ... 2099:
            century_key = 6;
            break;
        case 2100 ... 2199:
            century_key = 4;
            break;
    }

    float sum = last2DigitsYear + div + month_key + century_key + day;

    int week_day_int = (int)sum % 7;
    char week_day_str[100];

    if (week_day_int == 0) {
        strcpy(week_day_str, "Saturday");
    } else if (week_day_int == 1) {
        strcpy(week_day_str, "Sunday");
    } else if (week_day_int == 2) {
        strcpy(week_day_str, "Monday");
    } else if (week_day_int == 3) {
        strcpy(week_day_str, "Tuesday");
    } else if (week_day_int == 4) {
        strcpy(week_day_str, "Wednesday");
    } else if (week_day_int == 5) {
        strcpy(week_day_str, "Thursday");
    } else if (week_day_int == 6) {
        strcpy(week_day_str, "Friday");
    }

    printf("\nDay of the week for %02d/%02d/%d is %s.\n\n", day, month, year, 
                                                    week_day_str);

    return 0;
}
