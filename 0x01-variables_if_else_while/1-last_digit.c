#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: program will assign a random number to the variable
 * n each time it is excuted to print last digit stored
 * Return: Always (0) success
 */

int main(void)
{
	int n;
	int last_N;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Here goes my code*/
	last_N = n % 10; /*this gets the last number*/
	if (last_N > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last_N);
	}
	else if (last_N == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last_N);
	}
	else if (last_N < 6 && last_N != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_N);
	}
	return (0);
}
