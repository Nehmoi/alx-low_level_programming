#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints lowercase alphabets in reverse followed by
 * a new line
 *
 * Return: Always (0) success
 */

int main(void)
{
	char r_ch = 'z';

	while (r_ch >= 'a')
	{
		putchar(r_ch);
		--r_ch;
	}
	putchar('\n');

	return (0);
}
