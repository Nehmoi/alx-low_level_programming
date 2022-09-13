#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the alphabet in lowercase, followed by
 * a new line expect e and q
 *
 * Return: Always (0) success
 */

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower == 'e' || lower == 'q')
			++lower;
		putchar(lower);
		++lower;
	}
	putchar('\n');

	return (0);
}
