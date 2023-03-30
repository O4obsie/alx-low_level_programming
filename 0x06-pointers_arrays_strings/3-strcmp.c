#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: str1
 * @s2: str2
 * Return: val
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
