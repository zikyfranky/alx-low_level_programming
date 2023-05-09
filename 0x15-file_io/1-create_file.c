#include "main.h"

/**
 * create_file - Creates a file
 *
 * @filename: File to create
 * @text_content: Content to write to file
 *
 * Return: 1 on success else 0 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t file, bytesWritten;

	if (!filename)
		return (0);

	file = open(filename, O_WRONLY | O_APPEND);
	bytesWritten = write(file, text_content, strlen(text_content));

	close(file);
	return ((file == -1 || bytesWritten == -1) ? -1 : 1);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = create_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}
