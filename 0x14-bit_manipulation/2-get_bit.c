#include "main.h"
/**
 * get_bit- a function that returns the value of a bit.
 * @n: unsigned long int as parameter
 * @index: unsigned int as parameter
 * Return: retunrs  the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int bit;

if (index >= sizeof(unsigned long int) * 8)
return (-1);
bit = (n >> index) & 1;

return (bit);
}
