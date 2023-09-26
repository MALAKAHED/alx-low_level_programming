#include "lists.h"
/**
 * sum_listint - calculates the sum of all data in listint_t list
 * @head: first node
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int adding = 0;
listint_t *temp = head;
while (temp)
{
adding += temp->n;
temp = temp->next;
}
return (adding);
}
