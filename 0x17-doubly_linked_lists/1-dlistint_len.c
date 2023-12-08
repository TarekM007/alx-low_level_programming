#include "lists.h"
/**
 * dlistint_len- a funcion that counts the nodes
 * @h: a pointer to list_t as parameter
 * Return: returns number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
