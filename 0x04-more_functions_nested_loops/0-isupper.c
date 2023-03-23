#include "main.h"
#include <ctype.h>

/**
 * _isupper - check if character is uppercase
 *
 * @c: char c to check
 *
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	if (isupper(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
