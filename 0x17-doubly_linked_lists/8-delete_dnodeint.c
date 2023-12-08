#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes node at index.
 * @head: pointer to head of doubly linked list
 * @index: index of the list where the new node should be added
 * Return: returns value
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
{
(*head)->prev = NULL; }
free(current);
return (1); }
while (i < index && current != NULL)
{
current = current->next;
i++; }

if (current == NULL)
return (-1);

if (current->prev != NULL)
{
current->prev->next = current->next; }

if (current->next != NULL)
{
current->next->prev = current->prev; }
free(current);
return (1); }
