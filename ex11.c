// While loop and Boolean experession

#include <stdio.h>

int main(int argc, char *argv[]) {
	// go through each string in argv

	int i = 0;
	while(i < argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	// lets make our own array of strings
	char *states[] = {"Califonia", "Oregon", "Washington", "Texas" };
	int num_states = 4;
	i = 0; // watch for this
	while (i < num_states) {
		printf("state %d: %s\n", i, states[i]);
		i++;
	}

	return 0;
}
