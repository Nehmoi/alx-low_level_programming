#include "main.h"

/**
 * print_rev_recursion - prints a string in reverse in recursion.
 * @s: pointer to int variable
 * Return: Always No
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
