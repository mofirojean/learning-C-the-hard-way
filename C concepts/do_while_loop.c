// Program to add numbers untile the user enters zero

#include <stdio.h>

int main(int argc, char *argv[]) {
	double number, sum = 0;

	// the body of the loop is executed atleast once
	do {
		printf("Enter a number: ");
		scanf("%lf", &number);
		sum += number;
	}
	while(number != 0.0);

	printf("Sum = %.2lf\n", sum);
	return 0;

}
