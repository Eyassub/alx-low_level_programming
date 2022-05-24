#include "lists.h"
/**
* print_listint_safe - prints a linked list, safely
* @head: list of type listint_t to print
* Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
listint_t *start;
size_t i;
start = head;
if (h == NULL)
return (0);
for (i = 0; h != NULL && h != start; i++)
{
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
