#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts node at a given position.
 * @h: pointer to head of doubly linked list
 * @idx: index of the list where the new node should be added
 * @n: value to enter
 * Return: returns value
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *ptr = *h;
dlistint_t *ptr2 = NULL;
dlistint_t *temp = malloc(sizeof(dlistint_t));

if (h == NULL)
{
return (NULL);
}
temp->prev = NULL;
temp->n = n;
temp->next = NULL;

idx--;
while (idx != 0)
{
ptr = ptr->next;
idx--;
}
ptr2 = ptr->next;
ptr->next = temp;
ptr2->prev = temp;
temp->next = ptr2;
temp->prev = ptr;
return (temp);
}
