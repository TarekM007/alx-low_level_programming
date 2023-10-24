#include "lists.h"
/**
 * print_listint- a function that prints all the elements of a listint_t list.
 * @h: a pointer to list_t as parameter
 * Return: returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
const listint_t *ptr = h;

if (h == NULL)
return (0);
while (ptr != NULL)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
count++;
}
return (count);
}

