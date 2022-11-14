#include "dog.h"

/**
 * init_dog - a function to initialize a variable type
 * @name: the name of the dog
 * @age: the dog's age
 * @owner: the owner's name
 *
 * Return: Always (0) success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";

    return;
}
