#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: Always (0) success.
 */

int sum_them_all(const unsigned int n, ...)
{
	/* create va_list for storing variables argument*/

	va_list sumall;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	sum  = 0;

	/*initialize va_list for the numbers of argument*/
	va_start(sumall, n);

	/* loop through all arguments stored in the va_list*/

	for(i = 0; i < n; i++)
	{
		sum = sum + va_arg(sumall, int);
	}

	va_end(sumall);

	return(sum);
}