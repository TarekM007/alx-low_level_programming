#include "main.h"
/**
 * get_endianness- a function that checks the endianness.
 * Return: retunrs 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
unsigned int x = 0x01;
char *byte = (char *)&x;
return ((int) *byte);
}
