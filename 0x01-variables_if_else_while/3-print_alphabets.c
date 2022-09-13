#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints alphabet in lowercase and then
 * in uppercase, followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char lower = 'a';
	char UPPER = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		++lower;
	}
	while (UPPER <= 'Z')
	{
		putchar(UPPER);
		++UPPER;
	}
	putchar('\n');

	return (0);
}
