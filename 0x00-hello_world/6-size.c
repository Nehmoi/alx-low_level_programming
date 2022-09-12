#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints the size of various types
 * Return: Always (0) success
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int l;
	float f;

	printf("Size of a char: %Id byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %Id byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %Id byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %Id byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
