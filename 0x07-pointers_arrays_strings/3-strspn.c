#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: String to evaluate
 * @accept: String containing list of characters to match against @s
 *
 * Return: Gets the number of bytes in @s which are in @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
