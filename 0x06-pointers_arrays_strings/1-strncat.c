#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings including n or more bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: Always (0) success
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
