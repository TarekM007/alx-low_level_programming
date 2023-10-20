#include "list.h"
/**
 * print_list- a funcion that prints contents of nodes
 * @h: a pointer to list_t as parameter
 * Return: returns number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] ", h->len);
printf("%s\n", h->str);
}
h = h->next;
count++;
}
return (count);
}
