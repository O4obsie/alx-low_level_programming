#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 *
 * Return: prints alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int counter;

	for (counter = 0; counter <= 9; counter++)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
