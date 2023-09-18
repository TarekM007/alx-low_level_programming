#include <string.h>
#include "main.h"
/**
 * puts_half -   prints a string
 *
 * @str : a pointer to an int as parameter
 *
 * Return: returns void
 */
void puts_half(char *str)
{
int i;
int len = strlen(str);
int n;

if (len % 2 != 0)
{
n = ((len - 1) / 2) + 1;
}
else
n = len / 2;
for (i = n; i < len; i++)
{
putchar(str[i]);
}
printf("\n");
}
