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
int i;

for (i = 0; i <= 25; i++)
{
if (s[i] == '\0')
break;
putchar(s[i]);
}
putchar('\n');
}
