#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to head of doubly linked list
 * @n: numeric value wanted in new node
 *
 * Return: address to the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
{
	return (NULL);
}
temp->prev = NULL;
temp->n = n;

if (*head == NULL)
{
	temp->next = NULL;
}
else
{
temp->next = *head;
(*head)->prev = temp;
}
*head = temp;
return (temp);
}
