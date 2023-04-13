#include <string.h>

/**
 * _strcpy - copies a string from one pointer to another
 *	including the terminating null byte (\0)
 *
 * @dest: destination of string
 * @src: source of string to copy
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
