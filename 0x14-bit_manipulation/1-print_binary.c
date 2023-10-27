#include "main.h"
/**
 * print_binary- a function that prints binary number.
 * @n: unsigned long int as parameter
 * Return: retunrs void
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int leading_zeros = 1;

while (mask > 0)
{
if (n & mask)
{
printf("1");
leading_zeros = 0;
}
else if (!leading_zeros)
{
printf("0");
}
mask = mask >> 1;
}
if (leading_zeros) {
printf("0");
}
}
