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
	int var = 98;
	int *ip;

	ip = &var;
	printf("Address of var variable: %x\n", &var);

	printf("Address stored in ip variable: %x\n", ip);
	printf("Value of *ip variable: %d\n". *ip);

	return (0);
}
