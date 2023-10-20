#include "list.h"
/**
 * add_node_end- a funcion that inserts node at the end
 * @head: a pointer to a pointer to list_t as parameter
 * @str: a pointer to char as parameter
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
int i, count = 0;
list_t *ptr, *temp;

ptr = malloc(sizeof(list_t));
if (ptr == NULL)
return (NULL);
ptr->str = strdup(str);
for (i = 0; str[i] != '\0'; i++)
count++;
ptr->len = count;
ptr->next = NULL;
temp = *head;
if (temp == NULL)
*head = ptr;
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = ptr;
}
return (*head);
}
