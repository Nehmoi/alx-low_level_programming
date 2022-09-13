#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 *
 * Return: Always (0) success
 */

int main(void)
{
	int num = '0';

	while (num <= 9)
	{
		printf("%i", num);
		++num;
	}
	printf("\n");

	return (0);
}
