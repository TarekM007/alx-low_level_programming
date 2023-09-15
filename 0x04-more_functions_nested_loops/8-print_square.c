#include "main.h"
/**
 * print_square - prints the numbers
 *
 * @size : checks the input of the funcion
 *
 * Return: returns void
 */
void print_square(int size)
{
char c = '#';
int j = 0;
int i = 0;

for (j = 0 ; j < size ; j++)
{
for (i = 0 ; i < size ; i++)
{
_putchar(c);
}
_putchar('\n');
}
if (size == 0)
_putchar('\n');
}
