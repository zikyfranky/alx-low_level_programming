#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Crates memory and copy the contents of @str to memory
 * @size: Size of the dynamic array
 * @c: Character to initialize array with
 *
 * Return: pointer to array (SUCCESS), NULL(ERROR)
 */

char *_strdup(char *str)
{
	int len = strlen(str);
	char *array = (char *)malloc(len * sizeof(char));

	/*Handle the case where size is not valid*/
	if (len < 1)
	{
		return (NULL);
	}

	/*Only do initialization if allocation worked*/
	if (array != NULL)
	{
		int i = 0;

		while (i < len)
		{
			array[i] = str[i];
			i++;
		}
	}

	return (array);
}
