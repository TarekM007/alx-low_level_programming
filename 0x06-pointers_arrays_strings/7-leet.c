#include "main.h"
#include <string.h>
/**
 * leet - converts words
 *
 * @s : a pointer to a char as parameter
 *
 * Return: returns value
 */
char *leet(char *s)
{
int j;
char *r = s;
char a[] = {'a' , 'e' , 'o' , 't' , 'l'};
char n[] = {4 , 3 , 0 , 7 , 1};

while (*s)
{
for (j = 0; j < 5; j++)
{
if (*s == a[j] || *s == a[j] - 32)
{
*s = n[j] + '0';
}
}
s++;
}
return (r);
}
