#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string in recursion
 * @s: input stringreturn
 * Return: lenght of a string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	*s + count != '\0';
	count++;
	return (count);
}
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
