#include <stdio.h>
#include <ctype.h>

int triangle_type(float x, float y, float z);

int main(int argc, char *argv[]) {
    const char *strs[4];
    float x, y, z;
    char repeat[256];
    char rep;

    strs[0] = "Not a";
    strs[1] = "Equilateral";
    strs[2] = "Isoceles";
    strs[3] = "Scalene";

    do {
        do {
            printf("\nEnter triangle sides length (x, y, z): ");
            scanf("%f %f %f", &x, &y, &z);
        } while (x <= 0 || y <= 0 || z <= 0);

        printf("\n%s triangle\n", strs[triangle_type(x, y, z)]);

        do {
            printf("\nDo you want to check other triangle sides? [Y\\N] ");
            scanf("%s", repeat);
            rep = toupper(repeat[0]);
        } while (rep != 'Y' && rep != 'N');
    } while (rep == 'Y');

    return 0;
}

int triangle_type(float x, float y, float z) {
    if (x + y <= z || x + z <= y || y + z <= x)
        return 0;
    else if (x == y && y == z)
        return 1;
    else if (x == y || x == z || y == z)
        return 2;
    return 3;
}

