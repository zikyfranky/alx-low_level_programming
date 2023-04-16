#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate 2 strings and return a string
 * @s1: First string
 * @s2: Second string
 *
 * Return: pointer to array (SUCCESS), NULL(ERROR)
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, f_i = 0, s_i = 0;
	char *array;

	/*Handle the case where @s1 is null*/
	len1 = s1 == NULL ? 0 : strlen(s1);

	/*Handle the case where @s2 is null*/
	len2 = s2 == NULL ? 0 : strlen(s2);

	array = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	/*Only do initialization if allocation worked*/
	if (array != NULL)
	{
		int i = 0;
		/*Only Run when both arguments are !NULL*/
		if ((len1 + len2) > 0)
		{
			/*Firstly Do The First String*/
			while (f_i < len1)
			{
				array[i] = s1[f_i++];
				i++;
			}

			/*Now Do The Next Arguments String*/
			while (s_i < len2)
			{
				array[i] = s2[s_i++];
				i++;
			}
		}

		/*Add the null terminator*/
		array[i] = '\0';
	}

	return (array);
}
