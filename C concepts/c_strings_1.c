// learn how to use string by declaring them, initialising them
// and use them for various I/O

#include <stdio.h>

int main(int argc, char * argv[]) {

	char name[20]; // created an array to hold a string of characters

	printf("Enter name: ");
	scanf("%s", name);
	// note that we use just name instead of &name
	// reason is because name is a char of array and we know that array names
	// decay to pointers in C programming

	printf("Your name is %s.\n", name);

	return 0;
}
