#include <stdio.h>

/**
 * main -a program that prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument vector passed(strings)
 * Return: Always (0) success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
