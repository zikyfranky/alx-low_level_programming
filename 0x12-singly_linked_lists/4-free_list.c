#include "lists.h"

/**
 * free_list - Frees the linked list memory
 *
 * @head: Head Node
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;

		free(temp->str);
		free(temp);
	}
}
