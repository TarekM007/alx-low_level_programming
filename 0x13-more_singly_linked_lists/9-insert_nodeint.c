#include "lists.h"
/**
 * insert_nodeint_at_index- function that inserts new node at a given position.
 * @head: a pointer to a pointer to list_t as parameter
 * @idx: unsigned int as parameter
 * @n: int as parameter
 * Return: returns the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr;
listint_t *ptr2 = malloc(sizeof(listint_t));
if (ptr2 == NULL)
return (NULL);
ptr2->n = n;
ptr2->next = NULL;
if (*head == NULL)
return (NULL);
ptr = *head;
while (idx != 1)
{
ptr = ptr->next;
idx--;
}
ptr2->next = ptr->next;
ptr->next = ptr2;
return (ptr);
}
