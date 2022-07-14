#include "lists.h"
/**
 * list_len - returns no of lelement in the list
 * @h: singly linked list
 * Return: returns no of element in the list
 */
size_t list_len(const list_t *h)
{
size_t noelem;
noelem = 0;
while (h != NULL)
{
h = h->next;
noelem++;
}
return (noelem);
}
