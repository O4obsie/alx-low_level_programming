#include <ctype.h>
#include "main.h"

/**
 * _isalpha - chec if letter
 *
 * @c: letter to check
 *
 * Return: 1 if alphabet, 0 if not
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
