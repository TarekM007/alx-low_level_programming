#include "main.h"
/**
 * print_line - prints the numbers
 *
 * @n: checks the input
 *
 * Return: returns void
 */
void print_line(int n)
{
char c = '_';
int j = 0;

while (j < n)
{
_putchar(c);
n--;
}
_putchar('\n');
}
