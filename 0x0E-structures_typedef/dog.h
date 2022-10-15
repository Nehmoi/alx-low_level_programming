#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a new data type
 *
 * Return nothing
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void main()
{
	struct dog my_dog = {"Poppy", 3.5, "Bob"};
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);

	return(0);
}
