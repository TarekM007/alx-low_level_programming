#include "main.h"
#include<string.h>
/**
 * _memcpy -  a function that copies chars
 *
 * @dest: char as parameter
 *
 * @src: char as parameter
 *
 * @n: int as parameter
 *
 * Return: returns a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
