#include "main.h"
/**
 * reverse_array - reverses array
 *
 * @a : a pointer to an array as parameter
 *
 * @n : a pointer to an int as parameter
 *
 * Return: returns void
 */
void reverse_array(int *a, int n)
{
int temp;
int i;
int j = 0;

for (i = n - 1; i >= j; i--)
{
temp = a[j];
a[j] = a[i];
a[i] = temp;
j++;
}
}
