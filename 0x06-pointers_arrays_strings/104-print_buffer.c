#include "main.h"

/**
 * isPrintableASCII - determines if n is ASCII or not
 * @n: int as parameter
 * Return: 1 if true, 0 if false
 */

int isPrintableASCII(int n)
{
return (n >= 32 && n <= 126);
}
/**
 * printHexes - print hex values
 * @b: string as parameter
 * @start: int as parameter
 * @end: int as parameter
 */

void printHexes (char *b, int start, int end)
{
int i = 0;

while (i < 10)
{
if (i < end)
printf("%02x", *(b + start + i));
else
printf("  ");
if (i % 2)
printf(" ");
i++;
}
}
/**
 * printASCII - print ASCII values
 * @b: string as parameter
 * @start: int as parameter
 * @end: int as parameter
 */
void printASCII (char *b, int start, int end)
{
int ch, i = 0;

while (i < end)
{
ch = *(b + i + start);
if (!isPrintableASCII(ch))
ch = 46;
printf("%c", ch);
i++;
}
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
} else
printf("\n");
}
