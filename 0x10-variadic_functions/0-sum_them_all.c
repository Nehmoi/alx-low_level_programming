#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sumall;	/*create va_list for storing variables argument*/
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(sumall, n);	/*initialize va_list*/

	/*loop through all argument stored in the va_list*/
	for (i = 0; i < n; i++)
	{
		sum += va_arg(sumall, int);
	}
	va_end(sumall);
	return (sum);
}
