#include "main.h"

/**
 * get_bit - get value of a bit at a given index
 * @n: number
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return -1;
	}
	unsigned long int mask = 1ul << index;
	int bit_value = (n & mask) != 0;
	return bit_value;
}
