#include <stdio.h>
#include "main.h"

/**
 * Description: a function that returns the factorial of a given number.
 * @n: integer to be used
 * Return: Always (0) success.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
