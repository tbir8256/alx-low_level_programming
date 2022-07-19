#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: address to the head pointer of the list
 * @n: integer to be added to the new node
 * Return: returns address of the new node or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->next = *head;
temp->n = n;
*head = new;
return (new);
}
