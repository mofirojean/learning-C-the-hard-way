#include <stdio.h>

// Arrays Of Strings and Looping

int main(int argc, char *argv[]) {
	int i = 0;

	// go through each string in argv
	// why am skipping argv[0]
	for (i = 0; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	// defining our own array
	char *states[] = {"California", "Oregon", "washington", "Texas" };
	int num_states = 4;

	for(i = 0; i < num_states; i++) {
		printf("states %d: %s\n", i, states[i]);
	}


        return 0;
}

