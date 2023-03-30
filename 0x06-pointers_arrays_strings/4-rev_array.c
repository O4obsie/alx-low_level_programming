#include "main.h"

/**
 * reverse_array - reverses the array
 * @a: arr
 * @n: length of arr to rreverse
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
