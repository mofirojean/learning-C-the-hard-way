// Nested if..else statement

#include <stdio.h>
int main(int argc, char *argv[]) {
	int number1, number2;
	printf("Enter two numbers: ");
	scanf("%d %d", &number1, &number2);

	if (number1 >= number2) {
		if (number1 == number2) {
			printf("Result: %d = %d\n", number1, number2);
		}
		else {
			printf("Result: %d > %d\n", number1, number2);
		}
	}
	else {
		printf("Result: %d < %d\n", number1, number2);
	}

	return 0;
}

