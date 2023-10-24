#include "lists.h"
/**
 * get_nodeint_at_index- a function that returns the nth node of a list.
 * @head: a pointer to a pointer to list_t as parameter
 * @index: unsigned int as parameter
 * Return: returns the nth node of the list, NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *ptr = head;

if (head == NULL)
return (NULL);
while (ptr != NULL)
{
if (count == index)
return (ptr);
count++;
ptr = ptr->next;
}
return (NULL);
}
