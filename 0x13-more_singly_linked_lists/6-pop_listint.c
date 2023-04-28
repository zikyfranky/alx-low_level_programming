#include "lists.h"

/**
 * pop_listint - Frees the head and returns it's @n value
 *
 * @head: Head Node
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!*head || !head)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);
	return (data);
}
