#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - Concatenate all arguments and seperate by '\n'
 * @ac: Count of arguments
 * @av: Arguments array
 *
 * Return: NULL on failure and Pointer to new string non success
 */

char *argstostr(int ac, char **av)
{
	int i, j, pos = 0, len = 0;
	char *array;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	array = (char *)malloc((len + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++)
		{
			array[pos++] = av[i][j];
		}

		array[pos++] = '\n';
	}
	array[pos] = '\0';

	return (array);
}
