#include "main.h"

/**
 * binary_to_uint - Converts binary to uint
 *
 * @b: Number written in binary
 *
 * Return: The number of nodes in the list
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int index = 0;

	if (!b)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		sum = (sum << 1) + (b[index++] - '0');
	}

	return (sum);
}
