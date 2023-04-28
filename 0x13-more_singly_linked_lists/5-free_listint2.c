#include "lists.h"

/**
 * free_listint2 - Frees the linked list memory
 *
 * @head: Head Node
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;

		free(temp);
	}

	*head = NULL;
}
