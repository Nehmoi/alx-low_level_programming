#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments received
 *
 * @argc: cli arg counts
 *
 * @argv: cli arg stored as arrays
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
