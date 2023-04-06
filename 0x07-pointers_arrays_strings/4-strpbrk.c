#include <string.h>

/**
 * _strpbrk - Locate multiple characters in a string
 *
 * @s: String to search for
 * @accept: String to search in
 *
 * Return: Pointer to the byte in @s that matches the bytes in @accept
 * Or NULL if no match was found
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
