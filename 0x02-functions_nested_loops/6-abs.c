#include "main.h"

/**
 * _abs - checks for the absolute value of a number
 *
 * @num: checks the input of the function
 *
 * Return: returns always  0
 */

int _abs(int num)
{
if (num < 0)
num = (-1) * num;
return (num);
}
