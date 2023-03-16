#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %c byte(s)", sizeof(a));
	printf("Size of an int: %c byte(s)", sizeof(b));
	printf("Size of a long int: %c byte(s)", sizeof(c));
	printf("Size of a long long int: %c byte(s)", sizeof(d));
	printf("Size of a float: %c byte(s)", sizeof(e));
	return (0);
}
