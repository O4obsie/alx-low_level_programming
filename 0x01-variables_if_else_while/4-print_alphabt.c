#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
	{
		if(lett != 'q' || lett != 'e')
		{
			putchar(lett);
		}
	}
	putchar('\n');
	return (0);
}
