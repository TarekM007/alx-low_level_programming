#include <stdio.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * @name: a parameter
 * @age: a second parameter
 * @owner: a third parameter
 * Return: returns the new dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;

my_dog = malloc(sizeof(struct dog));
if (my_dog == NULL)
return (NULL);

my_dog->name = strdup(name);
my_dog->owner = strdup(owner);
my_dog->age = (age);
return (my_dog);
}
