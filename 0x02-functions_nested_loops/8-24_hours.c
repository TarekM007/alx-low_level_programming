#include "main.h"
/**
 * jack_bauer - prints every minute of the day of jack bauer
 *
 * Return: returns void
 */
void jack_bauer(void)
{
int i, j, k;

for (i = 0; i <= 23; i++)
{
for (j = 0; j <= 5; j++)
{
for (k = 0; k <= 9; k++)
{
printf("%02d", i);
putchar(':');
printf("%d", j);
printf("%d", k);
printf("\n");
}
}
}
}
