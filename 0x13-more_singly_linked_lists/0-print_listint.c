#include "lists.h"
/**
 * print_listint - it prints all the elements of the linked list
 * @h: linked list of type listint_t to be printed
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h);
{
size_t number = 0;
while (h)
{
printf("%dn\n", h->n);
number++
h = h->next;
}
return (number);
}
