#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - function appends the src string to the dest string, overwriting the terminating
 * null byte at the end of dest, and then adds a terminating null byte
 * @dest: destination string
 * @src: source string
 * Return: Always (0) success
 */

char *_strcat(char *dest, char *src)
{

	strcat(dest, src);
	return (dest);
}
