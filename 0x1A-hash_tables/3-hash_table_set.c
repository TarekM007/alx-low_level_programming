#include "hash_tables.h"
/**
 * hash_table_set - Write a function that adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 * Return: Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node = NULL;

if (key == NULL || strcmp(key, "") == 0)
{
return (0);
}
index = key_index((unsigned char *)key, ht->size);

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (0);
}

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = NULL;

new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
