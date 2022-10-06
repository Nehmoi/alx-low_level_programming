#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two digits
 *
 * @argc: cli arg count
 *
 * @argv: cli arrays
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
int i, j, mul;

if (argc <= 2)
{
printf("Error\n");

return (1);
}

j = atoi(argv[1]);
i = atoi(argv[2]);
mul = j *i;

printf("%d\n", mul);

return (0);
}
