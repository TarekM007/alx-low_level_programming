#include <string.h>
#include "main.h"
/**
 * print_rev -   reverse string
 *
 * @s : a pointer to a char as parameter
 *
 * Return: returns void
 */
void print_rev(char *s)
{
int leng, g;
leng = strlen(s);
for (g = leng - 1; g >= 0; g--)
{
printf("%c", s[g]);
}
printf("\n");
}
