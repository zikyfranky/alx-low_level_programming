#include <stdlib.h>

/**
 * create_array - Creates a dynamically allocated array
 * and initializes all elements to @c
 * @size: Size of the dynamic array
 * @c: Character to initialize array with
 *
 * Return: pointer to array (SUCCESS), NULL(ERROR)
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));

	unsigned int i = 0;

	while (i < size)
	{
		array[i++] = c;
	}

	return (array);
}
