#include "main.h"
#include<string.h>
/**
 * _memset - a function
 * @s: char as parameter
 *
 * @b: char as parameter
 *
 * @n: int as parameter
 * Return: returns a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
