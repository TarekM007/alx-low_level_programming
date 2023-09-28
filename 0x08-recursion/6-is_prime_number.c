#include "main.h"
/**
 * prime2 - a function
 * @a: an int as parameter
 * @b: an int as parameter
 *
 * Return: returns value
 */
int prime2(int a, int b)
{
if (a == b)
return (1);
else if (a % b == 0)
return (0);
return (prime2(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: an int as parameter
 *
 * Return: returns value
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime2(n, 2));
}
