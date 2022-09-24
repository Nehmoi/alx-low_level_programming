#include"main.h"
#include<stdio.h>
#include<string.h>

/**
 * _strcat - concatenates by appending 2 strings together
 * @dest: destination string
 * @src: source string
 * Return: 0 if successful
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
