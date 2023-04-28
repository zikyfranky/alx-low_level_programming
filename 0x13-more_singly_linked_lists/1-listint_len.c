#include "lists.h"

/**
 * listint_len - Prints number of elements in a linked list
 *
 * @h: Start Node
 *
 * Return: The number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
