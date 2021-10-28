#include <stdio.h>

int main() {
    char name[20];
    char gender;

    printf("\nName: ");
//    fgets(name, sizeof(name), stdin);
//    name[strcspn(name, "\n")] = 0;
    scanf("%s", &name);

    printf("Gender ([M]ale or [F]emale): ");
    scanf(" %c", &gender);

    printf("\n");

    switch (gender) {
        case 'F':
            printf("Hello Honorable Ms. %s.", name);
            break;
        case 'M':
            printf("Hello Honorable Mr. %s.", name);
            break;
        default:
            printf("Hello Stranger %s.", name);
            break;
    }

    printf("\n\n");
}

