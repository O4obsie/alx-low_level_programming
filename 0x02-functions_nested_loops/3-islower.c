#include <ctype.h>
#include "main.h"

/**
 * _islower - return value if alphabet is lower case
 *
 * @c: the input letter
 *
 * Return: 1 if lower case, 0 if not
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
