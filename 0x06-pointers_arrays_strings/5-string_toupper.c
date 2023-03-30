#include "main.h"

/**
 * string_toupper - changes string to lowercase
 * @s: str input
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + i) >= 97) && (*(s + i) <= 122))
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}

	return (s);
}
