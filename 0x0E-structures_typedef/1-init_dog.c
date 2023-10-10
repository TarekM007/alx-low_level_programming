#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function.
 * @d: a parameter.
 * @name: a parameter.
 * @age: a parameter.
 * @owner: a parameter.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
