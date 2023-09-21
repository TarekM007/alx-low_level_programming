#include "main.h"
#include <string.h>
/**
 * cap_string - capitalize all words
 *
 * @str : a pointer to a char as parameter
 *
 * Return: returns value
 */
char *cap_string(char *str)
{
char *r = s;
int i;
char a[] = " \t\n,.!?\"(){}";
int cap = 1;

while (*s)
{
if (cap && *s >= 'a' && *s <= 'z')
*s -= 32;
cap = 0;
for (i = 0; i < 12; i++)
{
if (*s == a[i])
cap = 1;
}
s++;
}
return (r);
}
