#include <stdio.h>

/**
 * main - Entry
 *
 * Return: always 0
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = '0'; num1 <= 9; num1++)
	{
		putchar(num1);
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
			putchar(num2);
			if (num1 < '9' && num2 < '0')
			{
				putchar(num2);
				putchar(',');
				putchat(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
