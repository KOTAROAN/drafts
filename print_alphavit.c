#include "stdio.h"

//#define BIG

#ifdef BIG
	#define FIRST 'A'
	#define LAST 'Z'
#else
	#define FIRST 'a'
	#define LAST 'z'
#endif


int main(void)
{
	char symbol;
		for (symbol = FIRST; symbol <= LAST; ++symbol)
			fprintf(stdout, "%c%s", symbol, (symbol < 'LAST')? ", " : ".");
	return 0;
}
