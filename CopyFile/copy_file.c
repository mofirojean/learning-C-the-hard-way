#include <stdio.h>
#include <stdlib.h> 

int main()
{
	FILE *fptr1, *fptr2;
	char filename[100], c;

	printf("Enter file name to open for reading:");
	scanf("%s", filename);

	// open the file for reading
	fptr1 = fopen(filename, "r");
	if (fptr1 == NULL) {
		printf("\nCannot open file %s. \n", filename);
		exit(0);
	}

	printf("\nEnter file name to open for writing:");
	scanf("%s", filename);

	// open another file for writing
	fptr2 = fopen(filename, "w");
	if (fptr2 == NULL) { 
                printf("\nCannot open file %s. \n", filename);
                exit(0);
        }
	
	// read the content from one file to another
	c = fgetc(fptr1);
	while (c != EOF) {
		fputc(c, fptr2);
		c = fgetc(fptr1);
	}

	printf("\nSuccessful Copy Of Contents to %s.\n", filename);

	fclose(fptr1);
	fclose(fptr2);
	
	return 0;
}
