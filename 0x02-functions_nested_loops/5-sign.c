#include "main.h"

/**
 * print_sign - prints whether the number is positive or negative
 *
 * @n: the input number
 *
 * Return: 1 if positive, _1 if negative and 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
