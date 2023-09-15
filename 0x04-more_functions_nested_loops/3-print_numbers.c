#include "main.h"
/**
 * print_numbers - prints the numbers
 *
 * Return: returns void
 */
void print_numbers(void)
{
char str[] = "0123456789";
int ch;

for (ch = 0; ch < 10; ch++)
{
_putchar(str[ch]);
}
_putchar('\n');
return (0);
}
