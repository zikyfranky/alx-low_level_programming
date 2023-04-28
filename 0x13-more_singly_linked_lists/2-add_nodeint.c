#include "lists.h"

/**
 * add_node - Add a new node as head of the list
 *
 * @head: Previous Head Node
 * @n: n value of the new head
 *
 * Return: Pointer to the new head or NULL on error
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));

	if (!new_head)
		return (NULL);

	new_head->n = n;

	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
