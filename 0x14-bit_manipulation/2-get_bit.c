#include "main.h"

/**
 * get_bit - get value of a bit at a given index
 * @n: number
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if ((n >> index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
