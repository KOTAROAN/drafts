#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DEBUG


int main(void)
{
	char *new_line;
	char array[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};
	int len = strlen(array);

	#ifdef DEBUG
	printf("*** Length of array is %d ***\n\n", len);
	#endif

	new_line = (char*)malloc(sizeof(char)*len);

	#ifdef DEBUG
	printf("*** Length of new_line is %d bytes ***\n\n", sizeof(new_line));
	#endif

	strcpy(new_line, array);
	
	#ifdef DEBUG
	printf("*** printf= %s ***\n\n", new_line);
	#endif

	fputs(new_line, stdout);
	free(new_line);
	fputs("\nProgram is finished. Resources are free.\n", stdout);
	return 0;
}
