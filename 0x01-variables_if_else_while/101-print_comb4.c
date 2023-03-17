#include <stdio.h>

/**
* main - The Main Function
*
* Return: 0 (success)
*/

int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 <  8; num1++)
	{
		for (num2 = num1 + 1; num2 <  9; num2++)
		{
			for (num3 = num2 + 1; num3 <  10; num3++)
			{
				putchar(48 + (num1 % 10)); /** 48 is the ASCII code for 0 */
				putchar(48 + (num2 % 10)); /** 48 is the ASCII code for 0 */
				putchar(48 + (num3 % 10)); /** 48 is the ASCII code for 0 */

				if (num1 == 7 && num2 == 8 && num3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
