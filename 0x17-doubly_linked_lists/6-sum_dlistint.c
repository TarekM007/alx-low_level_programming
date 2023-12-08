#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of the data a linked list.
 * @head: pointer to head of doubly linked list
 *
 * Return: returns value
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
