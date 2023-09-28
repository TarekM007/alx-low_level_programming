#include "main.h"
/**
 * palind2 - a function
 * @a: a pointer to char as parameter
 * @l: an int as parameter
 *
 * Return: returns value
 */
int palind2(char *a, int l)
{
if (*a == 0)
return (l - 1);
return (palind2(a + 1, l + 1));
}
/**
 * palind3 - a function
 * @a: a pointer to char as parameter
 * @l: an int as parameter
 *
 * Return: returns value
 */

int palind3(char *a, int l)
{
if (*a != *(a + l))
return (0);
else if (*a == 0)
return (1);
return (palind3(a + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string as parameter
 *
 * Return: returns value
 */
int is_palindrome(char *s)
{
int c;

c = palind2(s, 0);
return (palind3(s, c));
}
