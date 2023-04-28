#include "lists.h"

/**
 * add_nodeint_end - Add a new node as tail of the list
 *
 * @head: Head Node
 * @n: n value of the new end(tail) node
 *
 * Return: Pointer to the new tail or NULL on error
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail;
	listint_t *prev_tail;

	new_tail = malloc(sizeof(listint_t));

	if (!new_tail)
		return (NULL);

	new_tail->n = n;
	new_tail->next = NULL;

	if (!*head)
	{
		*head = new_tail;
		return (new_tail);
	}

	prev_tail = *head;

	while (prev_tail->next)
	{
		prev_tail = prev_tail->next;
	}

	prev_tail->next = new_tail;

	return (new_tail);
}
