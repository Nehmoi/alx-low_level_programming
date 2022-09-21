#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: A function that takes a pointer to an int as
 * parameter and updates the value it points to
 * Return: Always (0) success.
 */

int main(void)
{
	int* pc,  n;

	n = 402;
	pc = &n;
	n = 98;

	printf("%d\n", n); /*output: 98*/
	printf("%d\n", *pc); /*output: 98*/

	return (0);
}
