#include "lists.h"
/**
 * free_listint2- a function that frees a listint_t list.
 * @head: a pointer to a pointer to list_t as parameter
 * Return: retunrs void
 */
void free_listint2(listint_t **head)
{
listint_t *ptr, *temp;

if (*head == NULL)
return;
ptr = *head;
while (ptr != NULL)
{
temp = ptr->next;
free(ptr);
ptr = temp;
}
*head = NULL;
}
