#include "lists.h"

/**
 * add_node_end - Add a new node as tail of the list
 *
 * @head: Head Node
 * @str: Str value of the new end(tail) node
 *
 * Return: Pointer to the new tail or NULL on error
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail;
	list_t *prev_tail;

	if (!str)
		return (NULL);

	new_tail = malloc(sizeof(list_t));

	if (!new_tail)
		return (NULL);

	new_tail->str = strdup(str);

	if (!new_tail->str)
	{
		free(new_tail);
		return (NULL);
	}

	new_tail->len = strlen(str);
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
