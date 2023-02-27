#include "main.h"
/**
 * _strlen - This function returns the length of a string
 * @s: This is the parameter to change
 * Return: length
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length = length + 1;
		s = s + 1;
	}
	return (length);
}
