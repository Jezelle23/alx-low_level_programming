#include "main.h"
/**
 * flip_bits - flips two unsigned long integers
 * @n : unsigned long integer
 * @m : unsigned long integer
 * Return: Final count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int var = n ^ m;
	unsigned int count = 0;
	while (var != 0)
	{
		count += (var& 1);
		var >>= 1;
	}
	return count;
}
