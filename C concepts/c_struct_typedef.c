// Structures and the typedef keyword

#include <stdio.h>
#include <string.h>

// struct with typedef person
typedef struct Person {
	char name[50];
	int citNo;
	float salary;
} person;

int main(int argc, char *argv[]) {

	// cretae Person variable
	person p1;

	// assign value to name of p1
	strcpy(p1.name, "Goerge Orwell");

	// assign values of other p1 variables
	p1.citNo = 1984;
	p1.salary = 2500;

	// print struct variables
	printf("Name: %s\n", p1.name);
	printf("Citizenship No: %d\n", p1.citNo);
	printf("Salary: %.2f\n", p1.salary);

	return 0;
}
