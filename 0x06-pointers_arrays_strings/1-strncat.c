#include <string.h>

/**
 * _strncat - Appends @src to @dest
 *
 * @dest: String to be modified
 * @src: String to append to @dest
 *
 * Return: Pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
