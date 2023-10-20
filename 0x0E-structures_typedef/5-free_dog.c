#include "dog.h"

/**
 * free_dog - a function that frees dog.
 * @d: a type dog_t parameter
 * Return: returns void
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d);
}
}
