#include "main.h"

/**
 * isprintableASCII - determines if n is ASCII or not
 * @n: int as parameter
 * Return: 1 if true, 0 if false
 */

int isprintableASCII(int n)
{
return (n >= 32 && n <= 126);
}

/**
 * print_buffer - print buffer values
 * @b: string as parameter
 * @size: int as parameter
 */
void print_buffer(char *b, int size)
{
int start, end;

if (size > 0)
{
for (start = 0; start < size; start += 10)
{
end = (size - start < 10) ? size - start : 10;
printf("%08x: ", start);
printHexes(b, start, end);
printASCII(b, start, end);
printf("\n");
}
}
else
printf("\n");
}
