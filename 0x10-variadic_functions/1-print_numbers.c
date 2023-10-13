#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: string to print between numbers
 * @n: number of parameters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
int x = va_arg(args, int);
printf("%d", x);
if (separator == NULL || i == (n - 1))
{
return;
}
else
printf("%s", separator);
}
va_end(args);
printf("\n");
}
