#include "lists.h"

/**
 * listint_len - list linked list's elements
 * @h: head of the list
 * Return: returns number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t numbernodes = 0;
while (h != NULL)
{
h = h->next;
numbernodes++;
}
return (numbernodes);
}
