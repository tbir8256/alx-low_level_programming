#include "lists.h"
/**
 * print_listint - prints elements of the list
 * @listint_t - list elements
 * @h: head of a list
 * Return: returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t numbernodes = 0;
while (h != NULL)
{
printf("%d \n", h->n);
h = h->next;
numbernodes++;
}
return (numbernodes);
}
