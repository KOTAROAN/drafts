#include <stdio.h>
#define SIZE 51
//#define DEBUG


int main(void)
{
	int i;
	char array[SIZE];
	printf("Enter a string: \n");

	//fscanf(stdin, "%s", array);//Ignore everything after first space/Dangerous!
	//fscanf(stdin, "%[^\n]", array);//Ignore everything after first new_line_symbol/Dangerous!
	fgets(array, SIZE-1, stdin);
	fputs(array, stdout);
	//fprintf(stdout, "%s\n", array);//Put string into stdout

	return 0;
}

