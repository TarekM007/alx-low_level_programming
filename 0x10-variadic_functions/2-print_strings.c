#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings
 * @separator: string to print between numbers
 * @n: number of integers
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *x;

va_start(args, n);
for (i = 0; i < n; i++)
{
x = va_arg(args, char*);
if (x != NULL)
{
printf("%s", x);
}
else printf("(nil)");
if (separator == NULL || i == (n - 1))
{
return;
}
else
printf("%s", separator);
}
printf("\n");
va_end(args);
}
