#include <string.h>

/**
 * _strcat - Appends @src to @dest, overweiting the \0 and
 *			then adding it at the very end.
 *
 * @dest: String to be modified
 * @src: String to append to @dest
 *
 * Return: Pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
