#include <string.h>

/**
 * reverse_array - Reverse the elements of an array
 *
 * @a: The array to reverse
 * @n: Length of the array
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		/*
		 * Basically, swap value at i with n-i-1, i.e, first for last, and so on
		 * Reason for -1 is cause arrays are 0 indexed
		 */
		int tmp = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
