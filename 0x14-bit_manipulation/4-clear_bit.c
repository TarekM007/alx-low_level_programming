#include "main.h"
/**
 * clear_bit- a function that sets the value of a bit to 0.
 * @n: a pointer to unsigned long int as parameter
 * @index: unsigned int as parameter
 * Return: retunrs 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (index >= sizeof(unsigned long int) * 8)
return (-1);

mask = 1UL << index;

if (*n & mask)
*n ^= mask;

return (1);
}
