#include <string.h>
#include "main.h"
/**
 * puts2 -   prints a string
 *
 * @str : a pointer to an int as parameter
 *
 * Return: returns void
 */
void puts2(char *str)
{
int i;
int n = strlen(str);

for (i = 0; i < n; i += 2)
{
putchar(str[i]);
}
printf("\n");
}
