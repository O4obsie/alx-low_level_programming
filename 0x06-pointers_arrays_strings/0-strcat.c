#include "main.h"

/**
 * _strcat - concatenate 2 strings
 * @dest: string to append to
 * @src: str we append from
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + count) != '\0')
	{
		i++;
	}

	while (*(src + j) == '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
