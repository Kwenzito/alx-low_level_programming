#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * error_file - The function checks if files can be opened.
 * @ffile: file from.
 * @tfile: to file.
 * @argv: arguments vector.
 * Return: void.
 */
void error_file(int ffile, int tfile, char *argv[])
{
	int error = -1;

	if (ffile == error)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (tfile == error)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Entry Point.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int ffile, tfile, err_close;
	ssize_t no_chars, wrt;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp ffile tfile");
		exit(97);
	}

	ffile = open(argv[1], O_RDONLY);
	tfile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(ffile, tfile, argv);

	no_chars = 1024;
	while (no_chars == 1024)
	{
		no_chars = read(ffile, buffer, 1024);
		if (no_chars == -1)
			error_file(-1, 0, argv);
		wrt = write(tfile, buffer, no_chars);
		if (wrt == -1)
			error_file(0, -1, argv);
	}

	err_close = close(ffile);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffile);
		exit(100);
	}

	err_close = close(tfile);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffile);
		exit(100);
	}
	return (0);
}

