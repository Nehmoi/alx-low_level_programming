#include "main.h"
/**
 * _isupper - Checks if uppercase
 * @c: Character to check
 *
 * Return: Return 1 if uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
