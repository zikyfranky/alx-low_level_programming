#include <string.h>

/**
 * _strncpy - Copy string from @src to @dest up to @n
 *
 * @dest: String to be modified
 * @src: String to copy to @dest
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the resulting string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
