#include <stdio.h>

#define CAP 10

int main(int argc, char *argv[]) {
    int nums1[CAP], nums2[CAP], nums3[CAP]; 
    int i;

    printf("\n");
    for (i = 0; i < CAP; i++) {
        printf("Vector 1 Number %d: ", i+1);
        scanf("%d", &nums1[i]);
    }

    printf("\n");
    for (i = 0; i < CAP; i++) {
        printf("Vector 2 Number %d: ", i+1);
        scanf("%d", &nums2[i]);

        nums3[i] = nums1[i] * nums2[i];
    }

    for (i = 0; i < CAP; i++) {
        printf("\n%d -> %d x %d = %d", i+1, nums1[i], nums2[i], nums3[i]);
    }

    printf("\n");
}

