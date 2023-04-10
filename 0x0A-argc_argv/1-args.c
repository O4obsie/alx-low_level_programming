#include <stdio.h>
/**
 * main - prints the number of args
 * @argc: number of command line arguments.
 * @argv: arr of args
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
