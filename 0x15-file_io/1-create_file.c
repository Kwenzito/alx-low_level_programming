#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: pointer to file name
 * @text_content: pointer to text content
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, outfile;
	int index = 0, text_content_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[index]; index++)
			text_content_length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	outfile = write(fd, text_content, text_content_length);

	if (fd == -1 || outfile == -1)
		return (-1);

	close(fd);

	return (1);
}

