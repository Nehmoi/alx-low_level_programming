#include "main.h"

/**
 * _puts - recursion function that prints a string.
 * @str: the string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
	
		_putchar('\n');


}
