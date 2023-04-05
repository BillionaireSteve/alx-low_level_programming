#include "lists.h"
/**
 * print_listint - prints all the statements of linked list
 * @h: linked list of type listint_t to print
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t number = 0;
while (h)
{
printf("%d\n", h->x);
number++;
h = h->next;
}
return (number);
}
