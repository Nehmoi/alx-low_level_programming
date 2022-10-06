#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints args passed to it
 *
 *@argc: cli arg count
 *
 * @argv: cli arg array
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
