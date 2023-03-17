#include <stdio.h>

/**
* main - The Main Function
*
* Return: 0 (success)
*/

int main(void)
{
	char alpha = 'a';
	int i;

	for (i = 0; i <  10; i++)
	{
		putchar(48 + i);
	}

	while (alpha <= 'f')
	{
		putchar(alpha++);
	}

	putchar('\n');

	return (0);
}
