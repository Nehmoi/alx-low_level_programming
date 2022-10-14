#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_number - a function that prints numbers, followed by a new line
 *
 * @n: integers passed to the function
 *
 * Return: Always (0) success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printnumb;
	va_start(printnumb, n);
	{
		print_numbers(", ", 4, 0, 98, -1024, 402);
		printf("%c\n", print_numbers);
	}
	va_end(printnumb);
	return;
}
