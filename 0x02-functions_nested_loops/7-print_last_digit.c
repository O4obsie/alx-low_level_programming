#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print last digit of a number
 *
 * @n: input number
 *
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		a = (-1 * (n % 10));
		_putchar (a + '0');
		return (a);
	}

	else
	{
		a = (n % 10);
		_putchar (a + '0');
		return (a);
	}
}
