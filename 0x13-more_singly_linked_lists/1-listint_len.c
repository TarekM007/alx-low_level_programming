#include "lists.h"
/**
 * listint_len- a function that counts the number of elements in a linked list.
 * @h: a pointer to list_t as parameter
 * Return: returns number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
const listint_t *ptr = h;

if (h == NULL)
return (0);
while (ptr != NULL)
{
count++;
ptr = ptr->next;
}
return (count);
}
