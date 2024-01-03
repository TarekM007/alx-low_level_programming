#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key
 * Return: Returns: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = key_index((unsigned char *)key, ht->size);

hash_node_t *current = ht->array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
return (current->value);
}
current = current->next;
}
return (NULL);
}
