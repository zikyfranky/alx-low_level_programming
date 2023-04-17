#include <stdlib.h>

/**
 * _calloc - Allocate memory
 * @nmemb: Number of members to allocate
 * @size: Memory size
 *
 * Return: pointer to array (SUCCESS), NULL(ERROR)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/*Create memory needed for the height */
	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;

	return (array);
}
