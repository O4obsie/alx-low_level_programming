#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print the chessboar
 * @a: char in 2d arr
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			printf(a[i][j]);
			j++;
		}
		printf('\n');
		i++;
	}

}
