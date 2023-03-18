#include <stdio.h>

// program displays a number if negative

int main(int argc, char *argv[]) {
	int number;

	printf("Enter an number: ");
	scanf("%d", &number);

	// true if number is less than 0
	if (number < 0) {
		printf("You entered %d.\n", number);
	}

	printf("The if statement is easy.\n");

	return 0;
}
