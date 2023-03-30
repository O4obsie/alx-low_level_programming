#include "main.h"

/**
 * _strcat - concatenate 2 strings untill n
 * @dest: string to append to
 * @src: str we append from
 * @n: lenth to copy
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0' && (j < n))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
