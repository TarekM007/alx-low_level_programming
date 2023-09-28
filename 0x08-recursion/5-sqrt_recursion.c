#include "main.h"
/**
 * sqrt2 - a function
 * @a: an int as parameter
 * @b: an int as parameter
 *
 * Return: returns value
 */
int sqrt2(int a, int b)
{
if (b * b == a)
return (b);
else if (b * b > a)
return (-1);
return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: an int as parameter
 *
 * Return: returns value
 */
int _sqrt_recursion(int n)
{
return (sqrt2(n, 1));
}
