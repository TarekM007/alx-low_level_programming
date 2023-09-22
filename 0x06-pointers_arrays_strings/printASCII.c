#include "main.h"

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
if (!isprintableASCII(ch))
ch = 46;
printf("%c", ch);
i++;
}
}

