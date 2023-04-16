#include <stdlib.h>

/**
 * alloc_grid - Creates a 2 dimensional grid using @width and @height
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: pointer to 2D array (SUCCESS), NULL(ERROR)
 */

int **alloc_grid(int width, int height)
{
	int **array, i, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/*Create memory needed for the height */
	array = (int **)malloc(height * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			for (l = 0; l < i; l++)
			{
				free(array[l]);
			}
			/*Free all memory*/
			free(array);
			return (NULL);
		}

		for (l = 0; l < width; l++)
		{
			array[i][l] = 0;
		}
	}

	return (array);
}
