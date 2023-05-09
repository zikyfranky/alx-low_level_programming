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
	ssize_t file, bytesWritten, len = text_content ? strlen(text_content) : 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	bytesWritten = write(file, text_content, len);

	close(file);
	return ((file == -1 || bytesWritten == -1) ? -1 : 1);
}
