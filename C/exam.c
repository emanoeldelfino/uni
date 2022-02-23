#include <stdio.h>

int main(int argc, char *argv) {
    double grade;

    do {
        printf("\nAverage grade (0, 10): ");
        scanf("%lf", &grade);
    } while (grade > 10 || grade < 0);

    if (grade >= 7) {
        printf("\nCongrats! You passed this subject.");
    } else {
        double min_grade = ((double)(5 * 10) - (grade * 6)) / 4;

        printf("\nYou failed.");

        if (min_grade <= 10) {
            printf("\nYou'll have to take the final exam to pass.");
            printf("\nMin grade for passing final exam: %.2f", min_grade);
        } else {
            printf("\nYou'll have to retake the subject.");
        }
    }
    printf("\n");
}
