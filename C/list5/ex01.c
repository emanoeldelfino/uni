#include <stdio.h>

int main(int argc, char *argv[]) {
    int nums[20];

    int i;

    for (i = 0; i < 20; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &nums[i]);
    }
}
