#include "lists.h"
/**
 * print_listint_safe- a function that prints a listint_t linked list.
 * @head: a pointer to a pointer to list_t as parameter
 * Return: returns the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *ptr = head;
size_t Count = 0;

while (ptr != NULL && ptr->next != head)
{
printf("%d ", ptr->data);
ptr = ptr->next;
Count++;
}

if (ptr != NULL)
{
printf("%d ", ptr->data);
Count++;
}
printf("\n");

return (Count);
}
