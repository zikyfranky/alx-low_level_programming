/* #include <string.h> */
#include "main.h"

/**
 * _strlen_recursion - Recursively return length of string
 *
 * @s: String to be checked
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	/*You could easily use puts from the string library*/
	/*return strlen(s);*/

	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
