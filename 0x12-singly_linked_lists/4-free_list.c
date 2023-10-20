#include "list.h"
/**
 * free_list- a function that frees a list_t list
 * @head: a pointer to a pointer to list_t as parameter
 * Return: returns void
 */
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
