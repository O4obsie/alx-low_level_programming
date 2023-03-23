#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check if char is digit
 *
 * @c: char to check
 *
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
	if (isdigit(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
