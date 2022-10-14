#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/*
 * print_strings - a function that prints strings followed by a new line.
 * @n: number of strings passed to the function
 * @separator: the string to be printed between the strings
 * @...: variable number of strings to be printed
 *
 * Description: If separator is NULL, it is not printed.
 * 		If one of the string is NULL, (nil) is printed out.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/* creating the va_list for variable argument list*/
	va_list prtstg;
	char *str;
	unsigned int i;

	/* initializing the va_list for the numbers of argument*/
	va_start(prtstg, n);

	/* loop through the va_list list*/
	for (i = 0; i < n; i++)
	{
		str = va_arg(prtstg, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(prtstg);
}
