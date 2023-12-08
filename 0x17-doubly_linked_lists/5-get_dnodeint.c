#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth node of linked list.
 * @head: pointer to head of doubly linked list
 * @index: numeric value wanted in new node
 *
 * Return: address to the new element, or NULL if it failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
while (head != NULL && index > 0)
{
head = head->next;
index--;
}
if (head == NULL || index > 0)
{
return (NULL);
}
return (head);
}
