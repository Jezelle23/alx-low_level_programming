#include "main.h"
/**
 * flip_bits - flips two unsigned long integers
 * @n : unsigned long integer
 * @m : unsigned long integer
 * Return: Final count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;
	while (x != 0)
	{
		count += (x & 1);
		x >>= 1;
	}
	return count;
}
