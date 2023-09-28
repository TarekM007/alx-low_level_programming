#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - converts words
 *
 * @s : a pointer to a char as parameter
 *
 * Return: returns void
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
