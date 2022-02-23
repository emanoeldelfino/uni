#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isint(char * str);

int check_digit(char * barcode);

int main(int argc, char *argv[]) {
    char barcode[256];
    int barcode_len;
    char repeat;
    int digit;

    do {
        do {
            printf("\nEnter barcode first 11 to 13 digits: ");
            scanf("%s", barcode);
            barcode_len = strlen(barcode);

            if (barcode_len < 11 || barcode_len > 13)
                printf("\nInvalid number of digits: %d\n", barcode_len);
        } while (barcode_len < 11 || barcode_len > 13 || !isint(barcode));

        digit = check_digit(barcode);
        printf("\nCheck digit: %d. ", digit);
        printf("\nYou entered %d digits.", barcode_len);
        printf("\nBarcode format: GTIN-%d", barcode_len + 1);
        printf("\n%s -> %s%d", barcode, barcode, digit);

        do {
            printf("\n\nDo you want calculate a check digit again? [Y\\N] ");
            scanf(" %c", &repeat);
            repeat = toupper(repeat);
        } while (repeat != 'Y' && repeat != 'N');
    } while (repeat == 'Y');

    return 0;
}

int isint(char * str) {
    int i;
    for (i = 0; str[i] != '\0'; i++)
        if (!isdigit(str[i])) return 0;

    return 1;
}

int check_digit(char * barcode) {
    int barcode_len = strlen(barcode);

    if (barcode_len < 11 || barcode_len > 13)
        return -1;

    int i;
    int sum_last = 0, sum_sec_last = 0;
    for (i = barcode_len - 1; i >= 0; i-=2)
        sum_last += (barcode[i] - '0');
    for (i = barcode_len - 2; i >= 0; i-=2)
        sum_sec_last += (barcode[i] - '0');

    int remainder = ((sum_last * 3) + sum_sec_last) % 10;

    int check_digit = remainder > 0 ? 10 - remainder : 0;

    return check_digit;
}

