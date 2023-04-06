#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * _strlen - counts string length
 * @str: string to be used
 * Return: length of the string
 */

int create_file(const char *filename, char *text_content)
{
    int fd, res;
    size_t len = 0;
    if (filename == NULL)
    {
        return (-1);
    }
    if (text_content != NULL)
    {
        while (text_content[len] != '\0')
       	{
            len++;
        }
    }

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
    {
        return (-1);
    }

    if (text_content != NULL)
    {
        res = write(fd, text_content, len);
        if (res == -1 || (size_t) res != len)
       	{
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
