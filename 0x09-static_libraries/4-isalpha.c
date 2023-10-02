#include "main.h"
/**
 * _isalpha - checks if input is letter or not
 *
 * @c: checks the input of the function
 *
 * Return: returns 1 if 'c' is letter otherwise always 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
return (0);
}
