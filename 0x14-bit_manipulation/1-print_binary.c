#include<stdio.h>
#include"main.h"
/**
 * print_binary - print an unsigned int in binary.
 * @n: The number to print in binary format.
 */
void print_binary(unsigned long int n)
{
	unsigned long int outbine = 1ul << 63;
	char i = '0';

	while (!(outbine & n) &&outbine != 0)

		outbine = outbine >> 1;

	if (outbine == 0)
		write(1, &i, 1);

	while (outbine)
	{
		if (outbine & n)
		{
			i = '1';
		}
		else
		{
			i = '0';
		write(1, &i, 1);
		outbine = outbine >> 1;
		}
	}
}
