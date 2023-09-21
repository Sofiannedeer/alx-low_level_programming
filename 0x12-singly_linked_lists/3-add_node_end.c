#include "lists.h"

/**
 * add_node_end - Adds node at the end
 * of a list_t list.
 * @head: Head of the linked list.
 * @str: String to store in the list.
 * Return: Address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t w;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (w = 0; str[w]; w++)
		;

	new_node->len = w;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}

	return (*head);
}
