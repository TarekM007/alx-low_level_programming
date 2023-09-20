#include "main.h"
#include <string.h>
/**
 * cap_string - capitalize all words
 *
 * @str : a pointer to a char as parameter
 *
 * Return: returns value
 */
char *cap_string(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (str[i - 1] == 32 || str[i - 1] == 44)
str[i] -= 32;
if (str[i - 1] == 59 || str[i - 1] == 46)
str[i] -= 32;
if (str[i] == 33 || str[i] == 63 || str[i] == 34 || str[i] == 40)
str[i + 1] -= 32;
if (str[i] == 41 || str[i] == 123 || str[i] == 125)
str[i + 1] -= str[i] - 32;
if (str[i] == 9 || str[i] == 10)
str[i + 1] -= 32;
}
i++;
}
return (str);
}
