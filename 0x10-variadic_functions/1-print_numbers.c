#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 *
 * @n: integers passed to the function
 *
 * @separator: the string printed between numbers
 *
 * Return: Always (0) success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*create the va_list to store the variables argument*/
	va_list printnumb;
	unsigned int i;

	/*initialize the va_list for the numbers of arguments*/
	va_start(printnumb, n);

	/* loop through all the arguments stored in the va_list*/
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(printnumb, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(printnumb);
	printf("\n");
}
