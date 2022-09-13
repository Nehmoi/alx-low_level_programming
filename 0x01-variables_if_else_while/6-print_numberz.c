#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers
 *
 * Return: Always (0) success
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		/*convert num to ASCII representation*/
		putchar(num + '0');
		++num;
	}
	putchar('\n');

	return (0);
}
