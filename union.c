#include <stdio.h>

int main(void)
{
	union split_int
	{
		int integer;
		unsigned char bytes[sizeof(int)];
	} si;
	int i;
	printf("Please enter an integer number: ");
	scanf("%d", &si.integer);
	for (i = 0; i < sizeof(int); ++i)
		printf("byte #%d is %02x\n", i, si.bytes[i]);
	return 0;
}
