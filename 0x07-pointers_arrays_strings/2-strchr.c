#include "main.h"

/**
 * _strchr - finds a given pointer in string
 * @s: string to search in
 * @c: char to be found
 * Return: pointer to found char
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
