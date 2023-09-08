#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * description: a
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int i;
	int j;
	int k;
	int r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0 ; j < 9; j++)
		{
			for (k = 0 ; k <= 9; k++)
		{
			for (r = 0 ; r <= 9; r++)
		{
			if (i != 0 || j != 0 || k != 0 || r != 0)
	{
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			putchar(k + '0');
			putchar(r + '0');
	}
		if (i != 9 || j != 8 || k != 9 || r != 9)
		{
		putchar(',');
		putchar(' ');
		}
		else
		{
		putchar('\n');
		}
		}
		}
		}
	}
	return (0);
}
