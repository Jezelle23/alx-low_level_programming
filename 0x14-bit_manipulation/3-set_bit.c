#include<stdio.h>
#include"main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index of the bit to be set
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1ul << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n | mask);

	return (1);
}
