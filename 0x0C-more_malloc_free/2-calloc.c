#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: unsigned int as parameter.
 * @size: unsigned int as parameter.
 * Return: returns pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr1;
char *ptr2;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
ptr1 = malloc(size * nmemb);
if (ptr1 == NULL)
return (NULL);
ptr2 = ptr1;
for (i = 0; i < (size * nmemb); i++)
ptr2[i] = '\0';

return (ptr1);
}
