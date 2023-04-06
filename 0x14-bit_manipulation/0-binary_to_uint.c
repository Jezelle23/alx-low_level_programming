#include<stdio.h>
#include"main.h"
/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;
	if (b == NULL)
	{

		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		char c = b[i];
		if (c == '0' || c == '1')
		{
			result = result << 1;
			result = result | (c - '0');
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
