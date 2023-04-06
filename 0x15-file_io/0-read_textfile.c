#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * * read_textfile - reads a text file and prints it to the standard output
 * @filename: The name of the file
 * @letters: The number of letters to be printed
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_x, n_read, written;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * (letters + 1));
	if (filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	file_x = open(filename, O_RDONLY);
	if (file_x == -1)
		return (0);
	n_read = read(file_x, buffer, letters);
	if (n_read == -1)
		return (0);
	buffer[n_read] = '\0';
	written = write(STDOUT_FILENO, buffer, n_read);
	if (written != n_read)
		return (0);
	free(buffer);
	close(file_x);
	return (n_read);
}
