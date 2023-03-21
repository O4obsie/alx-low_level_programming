#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - entry point
 *
 * @n: input n to count numbers untill n
 *
 * Return: prints numbers untill n
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}

	printf("98\n");
}
