#include "main.h"

/**
 * error_handler - Print error message and exit with the specified code.
 * @code: The exit code.
 * @message: The error message.
 */
void error_handler(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}

/**
 * copy_file - Copies the content from one file to another.
 * @src_fd: The source file descriptor.
 * @dest_fd: The destination file descriptor.
 */
void copy_file(int src_fd, int dest_fd)
{
ssize_t bytes_read, bytes_written;
char buffer[BUF_SIZE];

while ((bytes_read = read(src_fd, buffer, BUF_SIZE)) > 0)
{
bytes_written = write(dest_fd, buffer, bytes_read);
if (bytes_written == -1)
{
error_handler(99, "Error: Can't write to file");
}
}

if (bytes_read == -1)
{
error_handler(98, "Error: Can't read from file");
}
}

/**
 * main - Entry point for the cp program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
int file_from, file_to;

if (argc != 3)
{
error_handler(97, "Usage: cp file_from file_to");
}

file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
error_handler(98, "Error: Can't read from file");
}

file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
{
error_handler(99, "Error: Can't write to file");
}

copy_file(file_from, file_to);

if (close(file_from) == -1 || close(file_to) == -1)
{
error_handler(100, "Error: Can't close file descriptor");
}

return (0);
}
