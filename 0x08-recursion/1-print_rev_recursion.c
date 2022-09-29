#include "main.h"

/**
 * print_rev - prints a string in reverse in recursion.
 * @s: int variable
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
	else
		_putchar('\n');
}
