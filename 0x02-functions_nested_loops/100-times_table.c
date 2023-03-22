#include "main.h"

/**
 * print_times_table - Prints times table of @n starting with 0
 * @n: The value of the times to be printed.
 */
void print_times_table(int n)
{
	int num, secondNum, product;

	if (n >= 0 && n  <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (secondNum = 1; secondNum <= n; secondNum++)
			{
				_putchar(',');
				_putchar(' ');

				product = num * secondNum;

				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');

				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar((product / 100) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
