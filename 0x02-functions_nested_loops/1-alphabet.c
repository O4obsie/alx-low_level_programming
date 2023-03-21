#include "main.h"

/**
 * print_alphabet - print alphabets in lowercase
 *
 * Return: prints all lowercase alphabets
 *
 */
void print_alphabet(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
	{
		_putchar(lett);
	}
	_putchar('\n');
}
