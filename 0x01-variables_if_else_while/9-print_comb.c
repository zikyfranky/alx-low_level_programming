#include <stdio.h>

/**
* main - The Main Function
*
* Return: 0 (success)
*/

int main(void)
{
	int num;

	for (num = 0; num <  10; num++)
	{
		putchar(48 + num); /** 48 is the ASCII code for 0 */

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
