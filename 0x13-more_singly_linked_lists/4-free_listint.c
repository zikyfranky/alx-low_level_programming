#include "lists.h"

/**
 * free_listint - Frees the linked list memory
 *
 * @head: Head Node
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}
