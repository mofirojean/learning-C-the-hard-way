// Arrays and Pointers

#include <stdio.h>

int main(int argc, char *argv[]) {
	int x[4];

	for(int i = 0; i < 4; ++i ) {
		printf("&x[%d] = %p\n", i, &x[i]);
	}
	printf("Address of array x = %p\n", x);
	printf("Address of (x + 1) or x[1] = %p\n", x+1);
	printf("Address of (x + 2) or x[2] = %p\n", x+2);

	return 0;
}
