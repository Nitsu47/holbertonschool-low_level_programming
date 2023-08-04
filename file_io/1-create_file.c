#include "main.h"
/**
 * create_file - create a file with the content
 * @filename: Name of the file
 * @text_content: Cotent given to the new file
 * Return: On succes returns 1 or -1 on failure
 */
int
create_file(const char *filename, char *text_content)
{
int fnd, count;

	if (!filename)
		return (-1);
	fnd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fnd == -1) /*If it fails*/
		return (-1);
	if (!text_content)
		return (1);
	/*Write file*/
	count = write(fnd, text_content, strlen(text_content));
	close(fnd);
	if (count == -1) /*If it fails*/
	{
		close(fnd); /*Close file*/
		return (-1);
	}
	return (1);
}
