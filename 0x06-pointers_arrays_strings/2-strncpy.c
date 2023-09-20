#include "main.h"
#include <string.h>
/**
 * _strncpy - copies two strings
 *
 * @dest : a pointer to an char as parameter
 *
 * @src : a pointer to an char as parameter
 *
 * @n : a pointer to an int as parameter
 *
 * Return: returns void
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
