#include <stdio.h>

/**
 * int_index - Searches for an integer via cmp function
 * @array: The array to iterate over
 * @size: Size of the array
 * @cmp: comparison function
 *
 * Return: -1 if not found or size<=0 else return the index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);

	return (-1);
}
