#include <stdio.h>
#include "main.h"

/**
 * main - program that prints number of arguments passed into it
 * @argc: counts number of arguments on the command line
 * @argv: array of pointer to the arguments passed(strings)
 * Return: 0 if successfull
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	printf("%d\n", argc - 1);
	return (0);
}
