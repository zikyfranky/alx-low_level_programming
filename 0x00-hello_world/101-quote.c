#include <unistd.h>
/**
* main - the main function
*
* Return: 1 (fail)
*/
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(text) - 1;
	ssize_t ret = write(STDERR_FILENO, text, len);

	return ((ret == len) ? 1 : -1);
}
