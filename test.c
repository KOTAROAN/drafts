#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#define DEBUG

int match(const char *str, const char *patrn)
{
	int i;
	for (; ; patrn++, str++)
	{
		switch(*patrn)
		{
			case 0:
				return *str == 0;
			case '?':
				if(!*str)
					return 0;
				break;
			case '*':
				for (int i = 0; ; i++)
				{
					if(match(str+i, patrn+1))
						return 1;
					if(!str[i])
						return 0;
				}
			default:
				if(*str != *patrn)
					return 0;
		}
	}
}

int main(int argc, char const *argv[])
{
	char line[] = "Short string with digit 2";

	#ifdef DEBUG
	printf("\nline = %s; *** pattern = %s\n", line, argv[1]);
	#endif

	if(match(line, argv[1]))
		printf("It's a match!\n");	
	return 0;
}
