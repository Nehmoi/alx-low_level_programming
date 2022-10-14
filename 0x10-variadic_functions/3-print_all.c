#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @c: character passed to the function
 * @i: integer passed to the function
 * @f: float passed to the function
 * @s: character pointer assigned to the function
 * Return: Always (0) success
 */

void print_all(const char * const format, ...)
{
	va_list all;
	const format;

	va_start(all, format);

	va_end(all);
	printf("\n");
}	
