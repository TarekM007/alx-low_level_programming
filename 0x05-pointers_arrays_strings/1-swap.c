#include "main.h"
/**
 * swap_int - swaps values
 *
 * @x : a pointer to an int as parameter
 *
 * @y : a pointer to an int as parameter
 *
 * Return: returns void
 */
void swap_int(int *x, int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}
