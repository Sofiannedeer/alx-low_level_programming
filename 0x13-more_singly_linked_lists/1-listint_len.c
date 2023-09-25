#include "lists.h"

/**
 * listint_len - Count num of nodes link
 * @h: Head of list
 *
 * Return: Num of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
