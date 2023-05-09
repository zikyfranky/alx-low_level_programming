#include "main.h"

/**
 * read_textfile - Reads content of text file
 *
 * @filename: File to read
 * @letters: Number of letters to read and print
 *
 * Return: 0 on error else the number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file, bytesRead, bytesWritten;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(1 + (sizeof(char) * letters));

	if (!buffer)
	{
		close(file);
		return (0);
	}

	bytesRead = read(file, buffer, letters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (bytesRead == -1 || bytesWritten != bytesRead)
	{
		close(file);
		free(buffer);
		return (0);
	}

	close(file);
	free(buffer);
	return (bytesWritten);
}
