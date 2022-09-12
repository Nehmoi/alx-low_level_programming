#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints the size of various types
 * Return: Always (0) success
 */
int main(void)
{
	int i;
	char c;
	long int li;
	long long int l;
	float f;

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a long int is: %lu.\n", (unsigned long)sizeof(li));
	printf("The size of a long long int is: %lu.\n", (unsigned long)sizeof(l));
	printf("The size of a float is: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
