#include "main.h"
#include <string.h>

/**
 * _puts_recursion - print a string
 * @s:string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		puts(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		puts('\n');
	}

}
