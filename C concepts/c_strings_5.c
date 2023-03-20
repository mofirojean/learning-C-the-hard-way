// String manipulation in C programming using liabrary function

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

	char name[30];
	printf("Enter name: ");
	fgets(name, sizeof(name), stdin);
	printf("Name: ");
	puts(name);

	return 0;
}
