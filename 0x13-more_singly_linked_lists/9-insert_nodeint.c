#include "lists.h"

/**
 * insert_nodeint_at_index - Add new node at given position
 *
 * @head: Head Node
 * @idx: Position to insert node
 * @n: Value of new node to insert
 *
 * Return: Pointer to new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;

		return (new);
	}

	while (temp && i < idx)
	{
		if (i != idx - 1)
		{
			temp = temp->next;
			i++;
			continue;
		}

		new->next = temp->next;
		temp->next = new;
		return (new);
	}

	return (NULL);
}
