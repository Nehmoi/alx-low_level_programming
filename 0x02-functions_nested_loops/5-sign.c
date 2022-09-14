#include "main.h"

/**
 * main - Entry point
 * Desciption: a program that prints sign of a number
 * Return: Always (0) success
 */

int print_sign(int value)
{
	if (value > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (value == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
