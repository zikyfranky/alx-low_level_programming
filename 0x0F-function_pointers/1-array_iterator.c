#include <stdio.h>

/**
 * array_iterator - Execute @action on all elements in @array
 * @array: The array to iterate over
 * @size: Size of the array
 * @action: Action to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size > 0 && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
