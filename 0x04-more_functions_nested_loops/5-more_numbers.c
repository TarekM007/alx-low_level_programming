#include "main.h"
/**
 * more_numbers - prints the numbers
 *
 * Return: returns void
 */
void more_numbers(void)
{
char str[] = "01234567891011121314";
int ch;
int j;

for (j = 0; j < 10; j++)
{
for (ch = 0; ch < 20; ch++)
{
_putchar(str[ch]);
}
_putchar('\n');
}
}
