#include "main.h"
/**
 * append_text_to_file - write t the end of the file
 * @filename: name of the file
 * @text_content: content in text
 * Return: 1 on succes or -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fnd, count;

	if (filename == NULL || !*filename)
		return (-1);
	fnd = open(filename, O_RDWR | O_APPEND);
	if (fnd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; *(text_content + count); count++)
		;
		write(fnd, text_content, count);
	}
	close(fnd);
	return (1);
}
