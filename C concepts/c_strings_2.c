/*
	reading a line of text

	fgets(): to read lines of strings and
	puts(): to display the string

	with this two functions you can get an input from the user and process the data completely
*/

#include <stdio.h>
int main(int argc, char *argv[]) {

	char name[30];

	printf("Enter name: ");
	fgets(name, sizeof(name), stdin); // read string
	printf("Name: ");
	puts(name); // displays string

	return 0;
}
