#include <stdio.h>
#include "main.h"
#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * struct dog - series of data to be stored
 * @name: char as parameter
 * @age: float as parameter
 * @owner: char as parameter
 *
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

#endif /* DOG_H */
