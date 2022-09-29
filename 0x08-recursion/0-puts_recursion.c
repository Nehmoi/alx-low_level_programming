#include "main.h"
#include <stdio.h>

/**
 * _puts - recursion function that prints a string.
 * @str: the string to be printed.
 */

void _puts_recursion(char *str)
{
	
	_putchar(*str++);

	_putchar('\n');
}
int main(void)
{
	_puts_recursion("_putchar *s");
	return (0);
}
