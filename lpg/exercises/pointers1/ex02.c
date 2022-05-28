/* Crie um programa que permita lidar com os ponteiros (valores e endereços de ponteiros). */

#include <stdio.h>

#define MAX

int * get_int_ptrs(int nums[], unsigned int size);

int main(int argc, char *argv[]) {
	int nums[MAX] = {1, 2, 3};
	int *numsPtr[MAX];

    return 0;
}

int * get_int_ptrs(int nums[], unsigned int size) {
	int *numsPtr[size];
	for (i = 0; i < size; i++) {
		numsPtr[i] = nums + i;
		// numsPtr = &nums[i];
	}
	
	return numsPtr;
}

