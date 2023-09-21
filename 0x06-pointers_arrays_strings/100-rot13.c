#include "main.h"
#include <string.h>
/**
 * rot13 - converts words
 *
 * @s : a pointer to a char as parameter
 *
 * Return: returns value
 */
char *rot13(char *s)
{
int i;
char *r = s;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char Roten13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*s)
{
for (i = 0; i <= 52; i++)
{
if (*s == rot13[i])
{
*s = Roten13[i];
break;
}
}
s++;
}
return (r);
}
