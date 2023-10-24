#include "lists.h"
/**
 * sum_listint- a function that sums all the data of a linked list.
 * @head: a pointer to a pointer to list_t as parameter
 * Return: returns the sum of all the data (n), 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *ptr = head;

if (head == NULL)
return (0);

while (ptr != NULL)
{
sum += (ptr->n);
ptr = ptr->next;
}
return (sum);
}
