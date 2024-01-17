#include <stdio.h>	// The stdio.h library contains input and output functions

int main()
{
	int a = 10;

	// Format specifiers are placeholders for variable data
	printf("a displayed as base 10 integer: %i\n", a);	// %i is for integers
	printf("a displayed as base 8 integer: %o\n", a);	// %i is for integers
	printf("a displayed as base 16 integer: %x\n", a);	// %i is for integers
	printf("a displayed as base 16 integer: %X\n", a);	// %i is for integers
	printf("a displayed as base 10 unsigned integer: %u\n", a);	// %i is for integers
	
	return 0;
}
