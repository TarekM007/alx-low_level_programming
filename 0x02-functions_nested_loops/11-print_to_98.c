#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: value to be used.
 *
 * Return: int (Sum)
 */
void print_to_98(int n)
{
int i, j;

printf("enter n ");
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
_putchar(',');
_putchar(' ');
}
}
else
{
for (j = n; j >= 98; j--)
{
printf("%d", j);
_putchar(',');
_putchar(' ');
}
}
}
