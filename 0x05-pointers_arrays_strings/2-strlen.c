#include "main.h"
#include <string.h>

/**
 * _strlen - return the length of a string
 * @s: char to check
 * Return: length of s
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
