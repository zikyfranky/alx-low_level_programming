#include "main.h"

/**
 * flip_bits - Filps x bit to get from @n to @m
 *
 * @n: Initial
 * @m: Number to get to
 *
 * Return: Number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int count;

	diff = n ^ m;
	count = 0;

	while (diff)
	{
		count++;
		diff &= (diff - 1);
	}

	return (count);
}
