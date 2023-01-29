#include <stdio.h>

//#define DEBUG
#define NO_LOOP
#define PI 3.1415
#define PF printf



int main(void)
{
	int i;
	int radius = 34;


#ifdef PI > 3.14
	float S;
	S = 2 * (float)radius * PI ;
	PF("%g\n", S);
#elif PI == 3.14
	int S;
	S = 2 * radius * PI ;
	PF("%d\n", S);
#endif



	#ifndef NO_LOOP
		#ifdef DEBUG
			printf("Start of loop\n");
		#else
			printf("Start of ASCII printing\n");
		#endif//DEBUG
	
		for (int i = 0; i < 256; ++i)
		{		
			printf("%3d. '%c'%s\n", i, i, (i<255)? ";" : ".");
		}

		#ifdef DEBUG
			printf("End of loop\n");
		#else
			printf("End of ASCII printing\n");
		#endif//DEBUG
	#endif//NO_LOOP

    return 0;
}