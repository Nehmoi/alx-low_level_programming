#include "dog.h"

/**
 * free_dog - a function that frees dog
 * @d: struct variable to be freed
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
