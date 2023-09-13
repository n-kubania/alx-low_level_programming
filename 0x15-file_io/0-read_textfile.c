#include "main.h"
/**
  * read_textfile- reads a text file and prints it to the POSIX standard output
  * @filename: Pointer pointing to the file
  * @letters: number of letters to be read and printed
  * Return: actual number of letters read and printed otherwise 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t bytesw;
	ssize_t bytesr;

	file = open(filename, O_RDONLY);
	if (file == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytesr = read(file, buffer, letters);
	if (bytesr == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	bytesw = write(STDOUT_FILENO, buffer, bytesr);
	if (bytesw == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);
	return (bytesw);
}
