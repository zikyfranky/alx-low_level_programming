#include "lists.h"

/**
 * print_list - Prints all element in a linked list
 *
 * @h: Start Node
 *
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	do
	{
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);

		printf("\n");
		count++;
		h = h->next;

	} while (h);

	return (count);
}
