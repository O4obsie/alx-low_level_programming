#include <stdio.h>

/**
 * main - Prints all args passed into main
 * @argc: Numbe of args
 * @argv: Arr of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
