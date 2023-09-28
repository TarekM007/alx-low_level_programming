#include "main.h"
#include <string.h>
/**
 * _puts_recursion - converts words
 *
 * @s : a pointer to a char as parameter
 *
 * Return: returns void
 */
void _puts_recursion(char *s)
{
if (*s == 0)
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
