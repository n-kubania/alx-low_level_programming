#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL  -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, bytesw, l = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (l = 0; text_content[l]; l++)
	}

	file = open(filename, O_WRONLY | O_APPEND);
	bytesw = write(file, text_content, l);

	if (file == -1 || bytesw == -1)
	return (-1);

	close(file);

	return (1);
}
