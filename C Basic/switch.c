// Program to create a simple calculator

#include <stdio.h>

int main(int argc, char *argv[]) {
	char operation;
	double n1, n2;

	printf("Enter operator (+, -, *, /): ");
	scanf("%c", &operation);
	printf("Enter two operands: ");
	scanf("%lf %lf", &n1, &n2);

	switch(operation) {
		case '+':
			printf("%.1lf + %.1lf = %.1lf\n", n1, n2, n1+n2);
			break;
		case '-':
			printf("%.1lf - %.1lf = %.1lf\n", n1, n2, n1-n2);
                        break;
		case '*':
			printf("%.1lf * %.1lf = %.1lf\n", n1, n2, n1*n2);
                        break;
		case '/':
			printf("%.1lf / %.1lf = %.1lf\n", n1, n2, n1/n2);
                        break;
		// operator does't match anycase +, -, *, /
		default:
			printf("Error! invalide operator\n");

	}


	return 0;
}

