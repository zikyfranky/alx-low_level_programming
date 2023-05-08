#include "main.h"

/**
 * get_endianness - Check enbdianness
 *
 * Return: 0 if big endian else 1
 */

int get_endianness(void)
{
	int num = 1;

	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
