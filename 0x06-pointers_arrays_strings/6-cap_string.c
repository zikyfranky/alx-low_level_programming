#include <string.h>

/**
 * cap_string - Capitalize all words in @s
 *				Separators of words: space, tabulation,
 *				new line, ,, ;, ., !, ?, ", (, ), {, and }
 *
 * @s: String to be modified
 *
 * Return: Pointer to the modified string
 */

char *cap_string(char *s)
{
	int i, len = strlen(s);
	char seprators[] = " \t\n,.;!?\"(){}";

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			/*
			 * Lowercase characters are -32 of upper case characters in the ASCII table
			 * so we need to convert them to upper case by subtracting 32
			 */
			if (i == 0)
			{
				/* Capitalize the first word if it's lowercase*/
				s[i] -= 32;
				continue;
			}

			char prevChar = s[i - 1];
			/*Search if prevChar is a separator*/
			if (strchr(seprators, prevChar) != NULL)
			{
				s[i] -= 32;
			}
		}
	}

	return (s);
}
