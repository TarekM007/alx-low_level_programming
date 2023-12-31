#include "hash_tables.h"
/**
 * key_index - a function that gives you the index of a key.
 * @key: key
 * @size: size of the array
 * Return: Returns the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash = hash_djb2(key);
unsigned long int index = hash % size;
return (index);
}
