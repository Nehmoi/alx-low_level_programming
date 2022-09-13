#include <stdio.h>

/**
 * main - ntry point
 *
 * Description: prints all hexadecimal numbers in lowercase
 *
 * Return: Always (0) sucess
 */

int main(void)
{
	int hex = 48; /*48; decimal rep of 0*/

	while (hex <= 102) /*102; decimal rep of f*/
	{
		putchar(hex);

		/*after 9 jump till 96;*/
		if (hex == 57)
			hex += 39;
		++hex;
	}
	putchar('\n');

	return (0);
}
