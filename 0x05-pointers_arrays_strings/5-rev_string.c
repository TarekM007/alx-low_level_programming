#include <string.h>
#include "main.h"
/**
 * rev_string -   prints a string in reverse
 *
 * @s : a pointer to an int as parameter
 *
 * Return: returns void
 */
void rev_string(char *s)
{
char temp;
int i, n;
int len = strlen(s);
n = len - 1;
for (i = 0; i < n; i++)
{
temp = s[i];
s[i] = s[n];
s[n] = temp;
n--;
}
}
