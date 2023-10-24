#include "lists.h"
/**
 * pop_listint-  a function that deletes the head node of a linked list
 * @head: a pointer to a pointer to list_t as parameter
 * Return: returns the head node’s data (n). 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;

if (*head == NULL)
return (0);

temp = *head;
data = temp->n;
*head = (*head)->next;
free (temp);
temp = NULL;

return (data);
}
