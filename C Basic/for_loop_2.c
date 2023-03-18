// Program calculates the sum of first n natural number
// Positive intergers 1,2,3...n are known as natural numbers

#include <stdio.h>
int main(int argc, char *argv[]) {
	int num, count, sum = 0;

	printf("Enter a positive interger: ");
	scanf("%d", &num);

	// for loop terminates when num is less than count
	for (count = 1; count <= num; ++count) {
		sum += count;
	}

	printf("Sum = %d\n", sum);

	return 0;
}
