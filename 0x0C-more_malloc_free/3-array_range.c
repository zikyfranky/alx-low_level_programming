#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: From here to @max
 * @max: The max number in array
 *
 * Return: pointer to array (SUCCESS), NULL(ERROR)
 */

int *array_range(int min, int max)
{
	int *array, len, i;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;

	/*Create memory needed*/
	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
		array[i++] = min++;

	return (array);
}
