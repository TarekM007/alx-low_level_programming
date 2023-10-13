#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints all data types
 * @format: contains data types
 * Return: void
 */
void print_all(const char * const format, ...){
int x = 0;
char *s;
va_list args;

va_start(args, format);
if (format != NULL)
{
while (format[x]){
switch (format[x])
{
case 'i':
printf("%d, ", va_arg(args, int));
break;
case 'c':
printf("%c, ", va_arg(args, int));
break;
case 'f':
printf("%f, ", va_arg(args, double));
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
printf("nill");
printf("%s", s);
break;    
}
x++;
}
printf("\n");
va_end(args);
}
}
