#include "main.h"
#include<string.h>
/**
 * _strchr - a function
 * @s: char as parameter
 *
 * @c: char as parameter
 *
 * Return: returns a value or a NULL
 */
char *_strchr(char *s, char c)
{
do {
if (*s == c)
{
return (s);
}
} while (*s++);
return (0);
}
