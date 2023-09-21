#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"
/**
* print_list - prints all the elements of a linked list
* @h: pointer to the list_t list to print
* Return: the number of nodes printed
*/
typedef struct list_s
{
char *str;
struct list_s *next;
} list_t;
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
printf("[%lu] %s\n", strlen(h->str), h->str);
}
h = h->next;
count++;
}
return count;
}
int main()
{
list_t *head;
head = malloc(sizeof(list_t));
head->str = "Hello";
head->next = malloc(sizeof(list_t));
head->next->str = "World";
head->next->next = NULL;  
size_t count = print_list(head);
printf("Number of nodes: %lu\n", count);
free(head->next);
free(head);
return 0;
}
