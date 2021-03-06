#include "lists.h"
/**
 * pop_listint - deletes the head node of listint_t
 * list & returns the head node data
 * @head: address to the head pointer of the list
 * Return: returns value of the head node data
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;
if (!head || !*head)
return (0);
temp = *head;
data = temp->n;
*head = temp->next;
free(temp);
return (data);
}
