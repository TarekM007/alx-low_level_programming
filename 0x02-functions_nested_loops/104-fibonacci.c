#include "main.h"
/**
 * main - entry point
 * Description: Valuse use to generate times tables.
 *
 * Return: void
 */
int main(void)
{
float totalsum;
unsigned long fib1 = 0, fib2 = 1, sum;

while (1)
{
sum = fib1 + fib2;
if (sum > 4000000)
braek;
if ((sum % 2) == 0)
totalsum += sum;

fib1 = fib2;
fib2 = sum;
}
printf("%.0f\n", totalsum);

return (0);
}
