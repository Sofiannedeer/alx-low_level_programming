#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - Cal the sum of (n)
 * @head : Pnt to the list
 * Return: sum of data (n) or 0
 */
int sum_listint(listint_t *head)
{
int add;

add = 0;

while (head)
{
add += head->n;
head = head->next;
}
return (add);
}
