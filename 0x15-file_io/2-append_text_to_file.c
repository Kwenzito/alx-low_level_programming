#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: File name pointer
 * @text_content: Text content pointer
 * Return:  1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
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

	fd = open(filename, O_WRONLY | O_APPEND);

	outfile = write(fd, text_content, text_content_length);

	if (fd == -1 || outfile == -1)
		return (-1);

	close(fd);

	return (1);
}

