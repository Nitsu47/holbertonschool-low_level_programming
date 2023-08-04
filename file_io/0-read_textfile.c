#include "main.h"
/**
 * read_texfile - read a text file and prints it to POSIX stdo.
 * @filename: name of the file.
 * @letters: letters in the file.
 * Return: actual number or letters of could read and print
 */
ssize_t
read_textfile(const char *filename, size_t letters)
{
	int x, count;
	char *buffer;

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		return (1);
	}
	if (filename == NULL)
	{
		return (0);
	}
	x = open(filename, O_RDONLY);
	if (x == -1)
	{
		free(buffer);
		return (0);
	}
	count = read(x, buffer, letters);
	if (count == -1)
	{
		free(buffer);
		return (0);
	}
	write(STDOUT_FILENO, buffer, count);
	close(x);
	free(buffer);
	return (count);
}
