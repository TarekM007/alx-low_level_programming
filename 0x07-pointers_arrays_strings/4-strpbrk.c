#include "main.h"
#include<string.h>
/**
 * _strpbrk - a function
 * @s: char as parameter
 *
 * @accept: char as parameter
 *
 * Return: returns a value
 */
char *_strpbrk(char *s, char *accept)
{
char *r;

r = strpbrk(s, accept);
if (r != 0)
return (r);
else
return (0);
}
