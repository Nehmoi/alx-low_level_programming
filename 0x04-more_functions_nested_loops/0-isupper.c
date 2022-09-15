#include "main.h"
#include <stdio.h>

/**
 * main - check for uppercase character
 * @c: input
 *
 * Return: 1 if c is uppercase
 * 0 otherwise
 */

int _isupper(int c)
{
	char c;

	if (c = 'A')
	{
		printf("%c: %d\n", c, _isupper(c));
		return (1);
	}
	if (c = 'a')
	{
		printf("%c: %d\n", c, _isupper(c));
		return (0);
	}
}
