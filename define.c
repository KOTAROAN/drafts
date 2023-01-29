#include <stdio.h>

#define VAR_PRINT(x) printf("%s = %d\n", #x, x)

int main(void)
{
	int int_variable = 23;
	VAR_PRINT(int_variable);
	return 0;
}
  