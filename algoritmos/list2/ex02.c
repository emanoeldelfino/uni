#include <stdio.h>
#include <ctype.h>

void str_to_upper(char str[]) {
    int i = 0;
    char ch;

    while (str[i]) {
        str[i] = toupper(str[i]);
        i++;
    }
}

int main() {
    float height;
    char sex[20];
    float ideal_weight = 0.0f;

    printf("\nSex: ");
    scanf("%s", sex);
    str_to_upper(sex);

    printf("\nHeight (m): ");
    scanf("%f", &height);

    if(sex[0] == 'M') {
       ideal_weight = (72.7 * height) - 58; 
    } else if (sex[0] == 'F' || sex[0] == 'W') {
       ideal_weight = (62.1 * height) - 44.7; 
    } else {
        printf("\nYour sex couldn't be identified. Ideal weight defaults to zero.");
    }

    printf("\nThe ideal weight for sex %s and height %.02fm is %.02fkg.\n\n", 
            sex, height, ideal_weight); 
}

