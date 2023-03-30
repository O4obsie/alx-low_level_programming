#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: str to copy to
 * @src: str to copy from
 * @n: length to copy
 * Return: copy of string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
