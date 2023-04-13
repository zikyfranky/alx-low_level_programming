#include <string.h>

/**
 * _memcpy - function that copies memory area
 *
 * @dest: Destination Area
 * @src: Source area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the memory area @s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
