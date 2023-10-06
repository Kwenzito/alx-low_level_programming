#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads data from a text file and then...
 * prints to  the POSIX standard output
 * @filename: Text file name
 * @letters: The number of letters to be read and printed.
 * Return: The number of bytes read and printed,
 * otherwise 0 if function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, outfile, infile;
	char *buffer;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	infile = read(fd, buffer, letters);

	outfile = write(STDOUT_FILENO, buffer, infile);

	free(buffer);

	close(fd);

	return (outfile);
}

