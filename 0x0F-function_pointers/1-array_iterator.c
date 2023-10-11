#include "function_pointers.h"

/**
 * array_iterator - a function.
 * @array: array as parameter.
 * @size: size as parameter.
 * @action: A pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
