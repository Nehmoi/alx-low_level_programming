#include <stdio.h>
#include <unistd.h>
/**
 * main - print quote
 * Description: A C program that prints without any NAME function
 * Return: Always 1 (success)
 */
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

		write(1, quo, 59);
		return (1);
}
