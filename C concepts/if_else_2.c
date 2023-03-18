#include <stdio.h>

// check whether an interger is odd or even
int main(int argc, char *argv[]) {
	int number;
	printf("Enter an number: ");
	scanf("%d", &number);

	// True if the remainder is 0
	if (number%2 == 0) {
		printf("%d is an interger.\n", number);
	}
	else {
		printf("%d is an odd interger.\n", number);
	}

	return 0;
}
