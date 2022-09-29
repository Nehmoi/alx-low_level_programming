#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse in recursion.
 * @s: int variable
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	char *start = s;

	*start != '\0';
	start++;

	start != s, start--;
}
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
