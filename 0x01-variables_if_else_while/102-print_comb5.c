#include <stdio.h>

/**
* main - The Main Function
*
* Return: 0 (success)
*/

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <  99; num1++) /** Ignore 9 as 90 and 09 are same */
	{
		for (num2 = num1; num2 <  99; num2++)
		{
			if (num1 == num2)
				continue;

			putchar(48 + (num1 % 10));
			putchar(48 + (num1 % 10));
			putchar(' ');
			putchar(48 + (num2 / 10));
			putchar(48 + (num2 % 10));

			if (num1 == 98 && num2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
