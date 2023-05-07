#include "main.h"

/**
 * clear_bit - Set value of bit at @index to 0
 *
 * @n: Number to treverse
 * @index: Index
 *
 * Return: 1 on Success and -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;
	unsigned int tmp = index;

	if (index > 64)
		return (-1);

	while (tmp--)
		p *= 2;

	/**
	 * Only clear the bit if it is set
	 */
	if ((*n >> index) & 1)
		*n += p;

	return (1);
}
