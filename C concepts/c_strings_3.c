// Passing strings to a function

#include <stdio.h>

void displayString(char str[]);

int main(int argc, char * argv[]) {

	char str[50];
	printf("Enter string: ");
	fgets(str, sizeof(str), stdin);
	displayString(str);	// passing string to a function

	return 0;
}

void displayString(char str[]) {
	printf("String Output: ");
	puts(str);
}
