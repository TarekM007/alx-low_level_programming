#include "main.h"

/**
 * infinite_add - add two string numbers
 * @n1: a pointer to string number to add to n2
 * @n2: a pointer to string number to add to n1
 * @r: a pointer to the buffer to store the sum
 * @size_r: size of buffer
 * Return: pointer to sum or 0 if it does not fit in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, l = 0, d = 0, k, f, s;

while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
if (i > j)
l = i;
else
l = j;
if (l + 1 > size_r)
return (0);
r[l] = '\0';
for (k = l - 1; k >= 0; k--)
{
i--;
j--;
if (i >= 0)
f = n1[i] - '0';
else
f = 0;
if (j >= 0)
s = n2[j] - '0';
else
s = 0;
r[k] = (f + s + d) % 10 + '0';
d = (f + s + d) / 10;
}
if (d == 1)
{
r[l + 1] = '\0';
if (l + 2 > size_r)
return (0);
while (l-- >= 0)
r[l + 1] = r[l];
r[0] = d + '0';
}
return (r);
}
