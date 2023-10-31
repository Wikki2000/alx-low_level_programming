#include "main.h"

/**
 * read_textfile - Read text file and print it to STDOUT
 * @filename: file to read
 * @letters: Numbers of letter to read and print
 *
 * Return: The numbers of byte read and printed on success, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_write;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = (char *) malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	bytes_write = write(STDOUT_FILENO, buf, bytes_read);

	if (bytes_write == -1 || bytes_write != bytes_read)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (bytes_read);
}
