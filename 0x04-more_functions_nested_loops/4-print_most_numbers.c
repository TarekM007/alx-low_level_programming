#include "main.h"
/**
 * print_most_numbers - prints the numbers
 *
 * Return: returns void
 */
void print_most_numbers(void)
{
char str[] = "0123456789";
int ch;

for (ch = 0; ch < 10; ch++)
{
if (ch != 2 && ch != 4)
{
_putchar(str[ch]);
}
}
_putchar('\n');
}
