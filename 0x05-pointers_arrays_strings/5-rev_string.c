#include <string.h>
#include "main.h"

/**
 * rev_string - Takes a string and reverses it
 *
 * @s: The string to reverse
 *
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < (len / 2); i++)
	{
		char tmp = s[i];
		int oppSideIndex = len - 1 - i;

		s[i] = s[oppSideIndex];
		s[oppSideIndex] = tmp;
	}
}
