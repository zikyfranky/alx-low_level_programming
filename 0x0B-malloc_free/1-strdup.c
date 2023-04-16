#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Crates memory and copy the contents of @str to memory
 * @str: String to copy
 *
 * Return: pointer to array (SUCCESS), NULL(ERROR)
 */

char *_strdup(char *str)
{
	int len = strlen(str);
	char *array = (char *)malloc((len + 1) * sizeof(char));

	/*Only do initialization if allocation worked*/
	if (array != NULL)
	{
		int i = 0;

		while (i < len)
		{
			array[i] = str[i];
			i++;
		}

		array[i] = '\0';
	}

	return (array);
}
