#include "main.h"
#include <stdio.h>

/**
 * _puts - recursion function that prints a string.
 * @str: the string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s > 0)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	_putchar('\n');
	else
	{
		return (0);
	}
}
