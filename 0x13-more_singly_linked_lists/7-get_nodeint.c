#include "lists.h"

/**
 * get_nodeint_at_index - get node at @index
 *
 * @head: Head Node
 * @index: Index to find
 *
 * Return: Pointer to the node at @index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
