#include "lists.h"

/**
 * add_node - Add a new node as head of the list
 *
 * @head: Previous Head Node
 * @str: Str value of the new head
 *
 * Return: Pointer to the new head or NULL on error
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	if (!str)
		return (NULL);

	new_head = malloc(sizeof(list_t));

	if (!new_head)
		return (NULL);

	new_head->str = strdup(str);

	if (!new_head->str)
	{
		free(new_head);
		return (NULL);
	}

	new_head->len = strlen(str);
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
