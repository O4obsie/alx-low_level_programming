#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 *
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		printf("%i", a);
	}
	printf("\n");
}
