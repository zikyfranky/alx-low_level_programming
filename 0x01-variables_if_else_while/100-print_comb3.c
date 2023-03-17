#include <stdio.h>

/**
* main - The Main Function
*
* Return: 0 (success)
*/

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <  9; num1++) /** Ignore 9 as 90 and 09 are same */
	{
		for (num2 = num1 + 1; num2 <  10; num2++)
		{
			putchar(48 + (num1 % 10)); /** 48 is the ASCII code for 0 */
			putchar(48 + (num2 % 10)); /** 48 is the ASCII code for 0 */

			if (num1 == 8 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
