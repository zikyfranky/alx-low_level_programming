#include "main.h"

/**
 * set_bit - Set value of bit at @index
 *
 * @n: Number to treverse
 * @index: Index
 *
 * Return: 1 on Success and -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	while (index--)
		p *= 2;

	*n += p;

	return (1);
}
