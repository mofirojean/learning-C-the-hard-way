// user defined function

#include <stdio.h>

// function prototype or forward decleration

int addNumbers(int a, int b);

int main()
{
	int n1, n2,sum;

	printf("Enter two numbers: ");
	scanf("%d %d", &n1, &n2);

	sum = addNumbers(n1, n2);
	printf("Sum = %d\n", sum);

	return 0;
}


int addNumbers(int a, int b) // function definition
{
	return (a+b);
}
