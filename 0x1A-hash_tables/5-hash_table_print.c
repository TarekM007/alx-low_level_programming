#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 * @ht: hash table
 * Return: Returns void
 */
void hash_table_print(const hash_table_t *ht)
{
size_t i;
int count = 0;

if (ht == NULL)
{
return;
}

printf("{");
for (i = 0; i < ht->size; i++)
{
hash_node_t *current = ht->array[i];
while (current != NULL)
{
	if (count)
		printf(", ");
printf("'%s': '%s'", current->key, current->value);
current = current->next;
count = 1;
}
}
printf("}\n");
}
