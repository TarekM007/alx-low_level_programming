#include "lists.h"
/**
 * free_listint_safe- a function that frees a listint_t list.
 * @h: a pointer to a pointer to list_t as parameter
 * Return: returns the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h;
listint_t *temp;
size_t Count = 0;

while (current != NULL && current->next != *h)
{
temp = current;
current = current->next;
free(temp);
Count++;
}

if (current != NULL)
{
free(current);
Count++;
}
*h = NULL;

return (Count);
}
