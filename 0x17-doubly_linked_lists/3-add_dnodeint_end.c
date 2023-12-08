#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to head of doubly linked list
 * @n: numeric value wanted in new node
 *
 * Return: address to the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
{
return (NULL);
}
temp->next = NULL;
temp->n = n;
if (*head == NULL)
{
temp->prev = NULL;
*head = temp;
}
else
{
dlistint_t *tp = *head;
while (tp->next != NULL)
{
tp = tp->next;
}
tp->next = temp;
temp->prev = tp;
}
return (temp);
}
