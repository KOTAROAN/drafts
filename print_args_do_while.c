#include <stdio.h>
#include <stdlib.h>
//#define DO_WHILE

int main(int argc, char const *argv[])
{
#ifdef DO_WHILE
	do {
		argv++;
		printf("[%s]\n", *argv);
	} while(*(argv+1));
#else
	argv++;
	while(*argv)
	{
		printf("[%s]\n", *argv);
		argv++;
	}
#endif
	return 0;
}