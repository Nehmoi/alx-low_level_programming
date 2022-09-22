#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - takes an integer as parameter and
 * updates the value it points to to 98.
 */

int main(void)
{
	int n = 402;
	int *ptr = &n;
	*ptr = 98;

	printf("%d", *ptr);
}
