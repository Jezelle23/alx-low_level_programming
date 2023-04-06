#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

void print_error(char *msg, ...);
void check_io_stat(int status, int fd, char *filename, char mode);

/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, n_read, n_write;
    char buffer[1024];

    if (argc != 3)
    {
        print_error("Usage: cp file_from file_to\n");
        exit(97);
    }
    fd_from = open(argv[1], O_RDONLY);
    check_io_stat(fd_from, -1, argv[1], 'O');
    fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    check_io_stat(fd_to, -1, argv[2], 'W');
    while ((n_read = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        n_write = write(fd_to, buffer, n_read);
        if (n_write == -1 || n_write != n_read)
        {
            print_error("Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }
    if (n_read == -1)
    {
        print_error("Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    if (close(fd_from) == -1)
    {
        print_error("Error: Can't close fd %d\n", fd_from);
        exit(100);
    }
    if (close(fd_to) == -1)
    {
        print_error("Error: Can't close fd %d\n", fd_to);
        exit(100);
    }
    return (0);
}

/**
 * print_error - prints error message to STDERR
 * @msg: error message to be printed
 *
 * Return: void
 */
void print_error(char *msg, ...)
{
	va_list args;

	va_start(args, msg);
	dprintf(STDERR_FILENO, msg, args);
 	va_end(args);
}

/**
 * check_io_stat - checks if a file can be opened or closed
 * @status: file descriptor status
 * @fd: file descriptor
 * @filename: name of the file
 * @mode: closing or opening
 *
 * Return: void
 */
void check_io_stat(int status, int fd, char *filename, char mode)
{
	if (status == -1)
	{
		if (mode == 'O')
		{
			print_error("Error: Can't read from file %s\n", filename);
			exit(98);
		}
		if (mode == 'W')
		{
			print_error("Error: Can't write to %s\n", filename);
			exit(99);
		}
		if (mode == 'C')
		{
			print_error("Error: Can't close fd %d\n", fd);
			exit(100);
		}
	}
}
