#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that compute sum of all parameters
 * @n: number of parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list args;

if (n == 0)
{
return (0);
}
va_start(args, n);
for (i = 0; i < n; i++)
{
int x = va_arg(args, int);
sum = sum + x;
}
va_end(args);
return (sum);
}
