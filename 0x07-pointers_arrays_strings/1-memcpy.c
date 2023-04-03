#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: memory to copy from
 * @src: memory to copy from
 * @n: bytes to copy
 * Return: copies memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
