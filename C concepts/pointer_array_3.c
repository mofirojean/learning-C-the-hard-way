// pointers and arrays

#include <stdio.h>

int main() {
	int x[6] = {1,2,3,4,5,6};
	int * ptr;

	ptr = &x[2];

	printf("*ptr = %d\n", *ptr);
	printf("*(ptr + 1) = %d\n", *(ptr+1));
	printf("*(ptr - 1) = %d\n", *(ptr-1));


	return 0;
}