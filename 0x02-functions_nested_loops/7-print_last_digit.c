#include "main.h"
/**
 * print_last_digit - checks for the last digit of a number
 *
 * @n: checks the input of the function
 *
 * Return: returns always 0
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		lastdigit = (-1) * (n % 10);
	}
	else
	{
		lastdigit = n % 10;
	}
	_putchar(lastdigit + '0');
return (lastdigit);
}
