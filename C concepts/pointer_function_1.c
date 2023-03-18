// Pointers and Functions

#include <stdio.h>

void swap(int * n1, int * n2);

int main() {

	int num1 = 5, num2 = 2;

	// passing address of num1 and num 2
	swap(&num1, &num2);

	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);

	return 0;
}

void swap(int * n1, int * n2) {
	int temp = *n1; // store the value of n1 into a tem variable
	*n1 = *n2;
	*n2 = temp;
}
