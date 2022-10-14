#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * main - a function that returns the sum of all its parameters.
 * n == 0, return 0
 * Return: Always (0) success.
 */

int main(void)
{
	int sum;

	sum = sum_them_all(2, 98, 1024);
	printf("%d\n", sum);

	sum = sum_them_all(4, 98, 1024, 402, -1024);
	printf("%d\n", sum);

	return(0);
}

int sum_them_all(const unsigned int n, ...)
{
	va_list sumall;
	va_start(sumall, n);

	int result = 0;
	int i;

	for(i = 0; i < n; i++)
	{
		result = result + va_arg(sumall, int);
	}

	va_end(sumall);
	_putchar('\n');

	return(result);
}
