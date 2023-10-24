#include "lists.h"
/**
 * add_nodeint- a function that adds a new node at the beginning of a list.
 * @head: a pointer to a pointer to list_t as parameter
 * @n: int as parameter
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr = malloc(sizeof(listint_t));

if (ptr == NULL)
return (NULL);
ptr->n = n;
ptr->next = NULL;

ptr->next = *head;
*head = ptr;
return (ptr);
}
