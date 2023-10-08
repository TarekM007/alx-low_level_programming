#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * malloc_checked - checks for memory.
 * @b: unsigned int as parameter.
 * Return: returns pointer.
 */
void *malloc_checked(unsigned int b)
{
unsigned int *ptr;

ptr = malloc(sizeof(b));
if (ptr == 0)
exit(98);
return (ptr);
}
