#include "main.h"

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
