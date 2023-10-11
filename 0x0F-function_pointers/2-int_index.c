#include "function_pointers.h"

/**
 * int_index - a function.
 * @array: array as parameter.
 * @size: size as parameter.
 * @cmp: A pointer to the function to be executed.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
