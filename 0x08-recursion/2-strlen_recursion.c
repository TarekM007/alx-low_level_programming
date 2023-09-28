#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - calculates length
 *
 * @s : a pointer to a char as parameter
 *
 * Return: returns value
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
