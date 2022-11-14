#include "dog.h"

/**
 * init_dog - a function to initialize a variable type
 * @d: variable name
 * @name: the name of the dog
 * @age: the dog's age
 * @owner: the owner's name
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;

}
