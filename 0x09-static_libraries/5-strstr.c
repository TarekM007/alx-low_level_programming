#include "main.h"
#include<string.h>
/**
 * _strstr - a function
 * @haystack: char as parameter
 *
 * @needle: char as parameter
 *
 * Return: returns a value
 */
char *_strstr(char *haystack, char *needle)
{
char *r;

r = strstr(haystack, needle);
if (r != 0)
return (r);
else
return (0);
}
