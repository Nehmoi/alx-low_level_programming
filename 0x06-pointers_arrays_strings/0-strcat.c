#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * This function appends the src string to the dest string, overwriting the
 * terminating null byte at the end of dest, and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char s1[] = "Hello";
	char s2[] = "world!\n";

	strcat(s1, s1);
	printf("strcat(s1, s2): %s\n", s1);

	return (0);
}
