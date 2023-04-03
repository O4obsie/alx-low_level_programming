#include "main.h"

/**
 * _memset - copy bytes from src to dest
 * @s: dest
 * @b: src
 * @n: bytes to copy
 * Return: Copied bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
