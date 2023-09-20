#include "main.h"
#include <string.h>
/**
 * _strncat -   concatenate two strings
 *
 * @dest : a pointer to an char as parameter
 *
 * @src : a pointer to an char as parameter
 *
 * @n : a pointer to an int as parameter
 *
 * Return: returns value
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
