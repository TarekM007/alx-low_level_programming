#include "lists.h"
/**
 * add_node- a funcion that inserts nodes
 * @head: a pointer to a pointer to list_t as parameter
 * @str: a pointer to char as parameter
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
int i, count = 0;
struct list_s *ptr = malloc(sizeof(struct list_s));

if (ptr == NULL)
return (NULL);
ptr->str = strdup(str);
for (i = 0; str[i] != '\0'; i++)
count++;
ptr->len = count;
ptr->next = NULL;
ptr->next = *head;
*head = ptr;
return (*head);
}
