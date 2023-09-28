#include "main.h"
/**
 * _pow_recursion - a function
 *
 * @x : an int as parameter
 *
 * @y : an int as parameter
 *
 * Return: returns value
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
