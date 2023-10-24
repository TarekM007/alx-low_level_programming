#include "lists.h"
/**
 * find_listint_loop- a function that finds the loop in a linked list.
 * @head: a pointer to a pointer to list_t as parameter
 * Return: The address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *ptr = *head, *ptr2 = *head;

while (ptr && ptr2 && ptr2->next)
{
ptr = ptr->next;
ptr2 = ptr2->next->next;
if (ptr == ptr2)
return (1);
}
return (0);
}
