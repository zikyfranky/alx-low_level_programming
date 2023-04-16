#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Creates a 2 dimensional grid using @width and @height
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: pointer to 2D array (SUCCESS), NULL(ERROR)
 */

int **alloc_grid(int width, int height)
{
	int **array, i;

	if (width <= 0 || height <= 0)
	{
		return NULL;
	}

	/*Create memory needed for the height */
	array = (int **)calloc(height, sizeof(int *));

	if (array == NULL)
	{
		return NULL;
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)calloc(width, sizeof(int));

		if (array[i] == NULL)
		{
			return NULL;
		}
	}

	return (array);
}
