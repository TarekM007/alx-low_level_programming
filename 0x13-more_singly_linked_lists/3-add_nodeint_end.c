#include "lists.h"
/**
 * add_nodeint_end- a function that adds a new node at the end of a list.
 * @head: a pointer to a pointer to list_t as parameter
 * @n: int as parameter
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr, *temp;

temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = NULL;

if (*head == NULL)
*head = temp;
else
{
ptr = *head;
while (ptr->next != NULL)
ptr = ptr->next;
ptr->next = temp;
}
return (temp);
}
