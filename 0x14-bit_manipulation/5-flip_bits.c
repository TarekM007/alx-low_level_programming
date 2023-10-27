#include "main.h"
/**
 * flip_bits- a function that returns the number of bits to be flipped.
 * @n: an unsigned long int as parameter
 * @m: unsigned long int as parameter
 * Return: retunrs value.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xorResult = n ^ m;
unsigned int count = 0;

while (xorResult != 0)
{
count += xorResult & 1;
xorResult >>= 1;
}
return (count);
}
