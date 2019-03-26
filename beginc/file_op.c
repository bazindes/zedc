// File operation
// FILE  *fopen(const char * restrict name, const char * restrict mode);
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define __STDC_WANT_LIB_EXT1__ 1

#define LENGTH 81

int main(int argc, char const *argv[])
{
	char mystr[LENGTH];
	int mychar = 0;
	FILE *pfile = NULL;
	char *filename = "myfile.txt";

	printf("Enter an interesting string of up to %d characters:\n", LENGTH - 1 );

	if(!fgets(mystr, LENGTH, stdin)) {
		printf("Input from keyboard failed.\n");
		exit(1);
	}

	// Create a new file we can write
	pfile = fopen(filename, "w");
	if(!pfile) {
		printf("Error opening %s for writing. Program terminated.1\n", filename);
		exit(1);
	}
	setvbuf(pfile, NULL, _IOFBF, BUFSIZ);

	for(int i = strlen(mystr) - 1; i >= 0; i --)
		fputc(mystr[i], pfile);

	fclose(pfile);

	// Open the file for reading
	pfile = fopen(filename, "r");
	if(!pfile) {
		printf("Error opening %s for reading. Program terminated.2", filename);
		exit(1);
	}
	setvbuf(pfile, NULL, _IOFBF, BUFSIZ);

	// Read a character from the file and display it
	printf("the data read from the file is:\n");
	while((mychar = fgetc(pfile)) != EOF)
		putchar(mychar);
	putchar('\n');

	fclose(pfile);
	pfile = NULL;
	remove(filename);

	return 0;
}



