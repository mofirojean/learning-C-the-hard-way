#include <stdio.h>
#include <stdlib.h> 

int main()
{
	FILE *file_1, *file_2;
	char filename[100], c;

	printf("Enter name of source file: ");
	scanf("%s", filename);

	// open the file for reading
	file_1 = fopen(filename, "r");
	if (file_1 == NULL) {
		fclose(file_1);
		printf("\nCannot open file %s. \n", filename);
		exit(0);
	}

	printf("\nEnter name of target file: ");
	scanf("%s", filename);

	// open another file for writing
	file_2 = fopen(filename, "w");
	if (file_2 == NULL) {
		fclose(file_2);
                printf("\nCannot open file %s. \n", filename);
                exit(0);
        }
	
	// read the content from one file to another
	c = fgetc(file_1);
	while (c != EOF) {
		fputc(c, file_2);
		c = fgetc(file_1);
	}

	printf("\nSuccessful Copy Of Contents to %s.\n", filename);

	fclose(file_1);
	fclose(file_2);
	
	return 0;
}
