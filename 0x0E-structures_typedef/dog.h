#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a dog's basic info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: nil
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - user-defined data type struct dog
 */

typedef struct dog dog_t;

/*defining the struct data type and including various protype*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
