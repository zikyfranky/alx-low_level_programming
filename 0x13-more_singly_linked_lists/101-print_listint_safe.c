#include "lists.h"

/**
 * print_listint_safe - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			slow = slow->next;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				count++;
				slow = slow->next;
			}
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			count++;
			break;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
