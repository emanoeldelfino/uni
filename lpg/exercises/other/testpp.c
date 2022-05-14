#include <stdio.h>

int main(int argc, char *argv[]) {
	int num = 5;

	printf("\nnum -> %d", num);

	num++;
	printf("\nnum++ %d", num);

	++num;
	printf("\n++num %d", num);

	printf("\nprintf(num++) -> %d", num++);

	printf("\nprintf(++num) -> %d\n\n", ++num);

    return 0;
}

