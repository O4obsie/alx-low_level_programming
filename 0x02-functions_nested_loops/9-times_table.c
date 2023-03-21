#include "main.h"

/**
 * time_tables - print the 9 times table
 *
 * Return: 9 times table
 */
void times_table(void)
{
	int a, b, c, d;
	int ans;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			ans = a * b;
			c = ans / 10;
			d = ans % 10;
			if (c > 0)
			{
				_putchar(c + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar(d + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
