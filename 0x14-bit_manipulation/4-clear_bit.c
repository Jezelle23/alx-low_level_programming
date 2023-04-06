#include"main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to number
 * @index: position
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;
	if (index >= sizeof(unsigned long int) * 8)
	{
		 return -1;
	}
	temp = ~(1UL << index);
	*n &= temp;
	return 1;
}
