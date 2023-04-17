#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenate 2 strings and return a string
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to take from second string
 *
 * Return: pointer to array (SUCCESS), NULL(ERROR)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, f_i = 0, s_i = 0;
	char *array;

	/*Handle the case where @s1 is null*/
	len1 = s1 == NULL ? 0 : strlen(s1);

	/*Handle the case where @s2 is null*/
	len2 = s2 == NULL ? 0 : strlen(s2);

	if (n < (unsigned)len2)
	{
		len2 = n;
	}
	array = malloc((len1 + len2 + 1) * sizeof(char));

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
			/*Taking just @n bytes*/
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

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
