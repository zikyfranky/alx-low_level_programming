#include "lists.h"

/**
 * sum_listint - Sum all node numbers
 *
 * @head: Head Node
 *
 * Return: Sum of all node numbers
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
