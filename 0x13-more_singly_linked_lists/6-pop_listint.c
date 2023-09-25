#include "lists.h"
/**
 * pop_listint - Delete head
 * @head : pnt to the head of list
 * Return: Head node's data (n) or 0
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

temp = *head;

if (temp == NULL)
return (0);

*head = temp->next;
n = temp->n;
free(temp);
return (n);
}
