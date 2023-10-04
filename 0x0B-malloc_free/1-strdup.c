#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/**
 * _strdup - a function that creates memory using malloc
 * @str: a character as parameter
 *
 * Return: returns value
 */
char *_strdup(char *str)
{
char *src;
char *p;
int len = 0;

while (str[len])
len++;
src = malloc(len + 1);
p = src;
while (*str)
*p++ = *str++;
*p = '\0';
return (src);
}
