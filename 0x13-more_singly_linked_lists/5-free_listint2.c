#include "lists.h"
/**
 * free_listint2 - Free list
 * @head : Pnt to list
 * Return: Void
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
head = NULL;
}
