#include <stdio.h>
#include <stdlib.h>

/**
 * struct dag - a new type
 *
 * Return nothing
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return(0);
}