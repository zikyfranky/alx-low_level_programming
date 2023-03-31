#include <string.h>

/**
 * string_toupper - Convert all lowercase characters to upper
 *
 * @s: String to be modified
 *
 * Return: Pointer to the modified string
 */

char *string_toupper(char *s)
{
	int i, len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			/*
			 * Lowercase characters are -32 of upper case characters in the ASCII table
			 * so we need to convert them to upper case by subtracting 32
			 */
			s[i] -= 32;
		}
	}

	return (s);
}
