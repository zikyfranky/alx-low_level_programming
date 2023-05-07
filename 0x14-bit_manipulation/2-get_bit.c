#include "main.h"

/**
 * get_bit - Get value of bit at @index
 *
 * @n: Number to treverse
 * @index: Index
 *
 * Return: Bit value at @index
 */

int get_bit(unsigned long int n, unsigned int index)
{

	/**
	 * Handle out of range index
	 */
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
