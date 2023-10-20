#include "list.h"
/**
 * list_len- a funcion that count number of nodes
 * @h: a pointer to list_t as parameter
 * Return: returns number of nodes
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
