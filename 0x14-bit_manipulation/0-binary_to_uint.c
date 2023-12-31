#include "main.h"
/**
 * binary_to_uint- a function that converts binary to unsigned int.
 * @b: a pointer to char as parameter
 * Return: retunrs the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0, i;

if (b == NULL)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
result = result << 1;

if (b[i] == '1')
{
result = result | 1;
}
}
return (result);
}
