#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - determine if number is positive or negative
 *
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: Always 0 (successful)
 */
 
int main(void)
{
	  int n;

	  srand(time(0));
	  n = rand() - RAND_MAX / 2;

	  /*mycode*/
	  if (n > 0)
	  {
		      printf("%i is positive\n", n);
	  }
	  else if (n == 0)
	  {
		      printf("%i is zero\n", n);
	  }
	  else
	  {
		      printf("%i is negative\n", n);
	  }
	  return (0);
}
