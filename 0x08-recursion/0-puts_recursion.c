#include "main.h"
#include <string.h>

/**
 *_puts_recursion - prints a string
 *@s: pointer to string
 */
void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		puts('\n');
		return;
	}

	puts(*s);
	_puts_recursion(s + 1);

}
