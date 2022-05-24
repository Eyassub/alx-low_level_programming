#include "lists.h"
/**
* print_listint_safe - prints a linked list, safely
* @head: list of type listint_t to print
* Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
if (head)
{
printf("[%p] %d\n", (void *)head, head->n);
if (head->next < head)
{
return (1 + print_listint_safe(head->next));
}
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
return (1);
}
}
return (0);
}
