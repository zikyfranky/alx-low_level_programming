#include <string.h>

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: Memory Aread
 * @b: Constant Bytes to fill
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
    return (memset(s, b, n));
}
