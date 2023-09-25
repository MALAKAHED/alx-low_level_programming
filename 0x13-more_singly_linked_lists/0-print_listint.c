#include "lists.h"
/**
* print_listint - a function prints all elements of listint_t list
* @h: linked list of type listint_t to print
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t counter = 0;
while (h)
{
printf("%d\n", h->n);
counter++;
h = h->next;
}
return (counter);
}
