#include <string.h>

/**
 * _strncat - Appends @src to @dest up to @n characters from @src
 *
 * @dest: String to be modified
 * @src: String to append to @dest
 * @n: Max number of characters to append
 *
 * Return: Pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
