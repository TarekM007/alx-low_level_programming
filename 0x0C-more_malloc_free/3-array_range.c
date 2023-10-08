#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: int as parameter.
 * @max: int as parameter.
 * Return: returns pointer.
 */
int *array_range(int min, int max)
{
int *array, i, size;

if (min > max)
return (NULL);
size = (max - min) + 1;
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++, min++)
array[i] = min;
return (array);
}
