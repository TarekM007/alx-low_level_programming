#include "lists.h"
/**
 * free_dlistint- a funcion that frees contents of nodes
 * @head: a pointer to list_t as parameter
 * Return: returns void
 */
void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
	dlistint_t *current = head;

	head = head->next;
	free(current);
}
}
