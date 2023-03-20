// C Program to Count the Number of Vowels, Consonants,
// digits, and white-spaces in a string entered by the user


#include <stdio.h>
#include <stdbool.h> // header file for boolean data type
#include <ctype.h>

// prototype function
bool is_vowel(char ch);
bool is_consonant(char ch);
bool is_digit(char ch);
bool is_space(char ch);

int main(int argc, char * argv[]) {

	char line[150];
	int vowels, consonant, digit, space;

	// initialize all variables to 0
	vowels = consonant = digit = space = 0;

	// get full line of string input
	printf("Enter a line of string: ");
	fgets(line, sizeof(line), stdin);

	// loop through each character of the string
	for(int i = 0; line[i] != '\0'; ++i) {

		// convert character to lowercase
		line[i] = tolower(line[i]);

		// check is the character is a vowel
		if(is_vowel(line[i])) {
			++vowels;
		}

		// checks if character is a consonant
		else if(is_consonant(line[i])) {
			++consonant;
		}

		// check if character is a digit
		else if(is_digit(line[i])) {
			++digit;
		}

		// checks if the character is an empty space
		else if(is_space(line[i])) {
			++space;
		}
	}

	printf("Vowels: %d\n", vowels);
	printf("Consonants: %d\n", consonant);
	printf("Digits: %d\n", digit);
	printf("White spaces: %d\n", space);

	return 0;
}

// return true if a character is a vowel and false otherwise
bool is_vowel(char ch) {
	return (ch == 'a' || ch == 'e'|| ch == 'i'|| ch == 'o' || ch == 'u' );
}

// returns true if a character is a consonant and false otherwise
bool is_consonant(char ch) {
	return (ch >= 'a' && ch <= 'z' );
}

// returns true if character is a digit
bool is_digit(char ch) {
	return (ch >= '0' && ch <= '9');
}

// returns true if character is a space
bool is_space(char ch) {
	return (ch == ' ');
}
