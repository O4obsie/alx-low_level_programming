#include "function_pointers.h"
#include <stdlib>

/**
 * array_iterator - run function on each element of arr
 * @array: array
 * @size: size of arr
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
