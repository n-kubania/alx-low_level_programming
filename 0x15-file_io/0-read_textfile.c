#include "main.h"

/**
  * read_textfile- reads a text file and prints it to the POSIX standard output
  * @filename: Pointer pointing to the file
  * @letters: number of letters to be read and printed
  * Return: actual number of letters read and printed otherwise 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;             /* File descriptor for the file to read. */
	ssize_t total_bytes = 0; /* for total bytes. */
	char ch;            /* Character for reading from the file. */

    /* Check if the filename is NULL. */
	if (filename == NULL)
	return (0);

    /* Open the file for reading. */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

    /* Read and print the file character by character. */
	while (letters > 0 && read(fd, &ch, 1) == 1)
	{
	ssize_t bytes_written = write(STDOUT_FILENO, &ch, 1);

	if (bytes_written == -1)
	{
		close(fd);
		return (total_bytes);
	}

	total_bytes += bytes_written;
	letters--;
	}

	close(fd);
	return (total_bytes);
}
