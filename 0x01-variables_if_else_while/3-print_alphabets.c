#include <stdio.h>

/**
* main - The Main Function
*
* Return: 0 (success)
*/

int main(void)
{
	char l_alpha = 'a';
	char u_alpha = 'A';

	while (l_alpha <= 'z')
	{
		putchar(l_alpha++);
	}

	while (u_alpha <= 'Z')
	{
		putchar(u_alpha++);
	}

	putchar('\n');

	return (0);
}
