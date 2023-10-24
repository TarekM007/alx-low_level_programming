#include "lists.h"
/**
 * delete_nodeint_at_index- a function that deletes node.
 * @head: a pointer to a pointer to list_t as parameter
 * @index: unsigned int as parameter
 * Return: returns 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *ptr = *head;
listint_t *ptr2 = *head;

if (*head == NULL)
{
return (-1);
}
else if (index == 0)
{
*head = ptr->next;
free(ptr);
ptr = NULL;
}
else
{
while (index != 0)
{
ptr2 = ptr;
ptr = ptr->next;
index--;
}
ptr2->next = ptr->next;
free(ptr);
ptr = NULL;
}
return (1);
}
