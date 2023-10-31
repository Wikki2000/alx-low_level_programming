#include "main.h"


/**
 * append_text_to_file - Append text to the end of a file.
 * @filename: Name of the file to append to.
 * @text_content: Text content to append.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t text_len_Inc = 0;
		ssize_t char_written;

		while (text_content[text_len_Inc] != '\0')
		{
			text_len_Inc++;
		}

		char_written = write(fd, text_content, text_len_Inc);
		if (char_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
