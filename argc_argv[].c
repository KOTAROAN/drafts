#include <stdio.h>
//#define DEBUG




int main(int argc, char const *argv[])
{
    enum quontity {zero = 1, one, two, three, four, five} args;
    args = (enum quontity)argc;
    switch (args)
    {
    case zero:
        printf("You didn't enter argument\n");
        break;
    case one:
        printf("You entered one argument\n");
        break;
        case two:
        printf("You entered two arguments\n");
        break;
    case three:
        printf("You entered three arguments\n");
        break;
    case four:
        printf("You entered four arguments\n");
        break;
    case five:
        printf("You entered five arguments\n");
        break;
    default:
        printf("You entered more than 5 arguments\n");
        break;
    }
	for (int i = 1; i < argc; ++i)
	{
		fputs(argv[i], stdout);
        putchar('\n');
	}
	return 0;
}
