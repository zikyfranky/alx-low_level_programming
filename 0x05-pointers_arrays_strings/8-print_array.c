#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 *
 * @a: array of integers to print from
 * @n: nmumber of elements to print
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", "); /* Add comma and space if not the last*/
	}
	printf("\n");
}
