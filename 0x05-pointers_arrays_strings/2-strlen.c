#include "main.h"
/**
 * _strlen - This function returns the length of a string
 * @s: This is the parameter to change
 * @i: This is the integer variable
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
