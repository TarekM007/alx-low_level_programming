#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: char as parameter.
 * @s2: char as parameter.
 * @n: int as parameter.
 * Return: returns pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, l1, l2, l3, size;

l1 = strlen(s1);
l2 = n * (sizeof(char));
l3 = strlen(s2);
size = (l1 + l2 + 1);
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
s = calloc(size, sizeof(char));
if (s == 0)
return (0);
if (n >= l3)
{
for (i = 0; i < l1; i++)
s[i] = s1[i];
for (i = 0, j = l1; j < l1 + l2; j++, i++)
s[j] = s2[i];
s[j] = '\0';
}
for (i = 0; i < l1; i++)
s[i] = s1[i];
for (i = 0, j = l1; j < l1 + n; j++, i++)
s[j] = s2[i];
s[j] = '\0';
return (s);
}
