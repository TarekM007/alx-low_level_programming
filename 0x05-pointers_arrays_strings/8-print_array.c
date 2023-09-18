#include <string.h>
#include "main.h"
/**
 * print_array -   prints a string in reverse
 *
 * @a : a pointer to an int as parameter
 *
 * @n : a pointer to an int as parameter
 *
 * Return: returns void
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
