#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFF 1024

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 on success, otherwise error code
 */
int main(int argc, char *argv[])
{
	int x_from;
	int y_to;
	int readSize;
	int writeSize;
	char buffer[BUFF];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	/* Check number of arguments */
	if (argc != 3)
	{
		 /* Print error message and exit with code 97 */
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* Open file_from for reading */

	x_from = open(argv[1], O_RDONLY);
	if (x_from == -1)
	{
		/* Print error message and exit with code 98 */
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Open file_to for writing, create if it doesn't exist */
	y_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (y_to == -1)
	{
		/* Print error message and exit with code 99 */
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(x_from);
		exit(99);
	}

	/* copy file_from to file_to destination file*/
	do {
		readSize = read(x_from, buffer, BUFF);
		if (readSize == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(x_from);
			close(y_to);
			exit(98);
		}
		writeSize = write(y_to, buffer, readSize);
		if (writeSize == -1 || writeSize != readSize)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(x_from);
			close(y_to);
			exit(99);
		}
	} 
	while (readSize > 0);

	/* Close the file descriptors */
	if (close(x_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x_from);
		exit(100);
	}

	if (close(y_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", y_to);
		exit(100);
	}

	return (0);
}
