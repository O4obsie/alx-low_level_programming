#include "main.h"
#include <stdio.h>

/**
 * create_array - creates array beginning with c
 * @size: size of arr
 * @c: 1st element
 * Return: arr created
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (!arr)
		return (NULL);

	for (index = 0; index < size; index++)
		arr[i] = c;

	return (arr);
}
