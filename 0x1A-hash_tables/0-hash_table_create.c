#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 * NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table = (hash_table_t *) malloc(sizeof(hash_table_t));
if (hash_table == NULL)
{
	return (NULL);
}
hash_table->size = size;
return (hash_table);
}
