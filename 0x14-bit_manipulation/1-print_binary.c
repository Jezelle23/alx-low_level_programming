#include<stdio.h>
#include"main.h"
/**
 * print_binary - print an unsigned int in binary.
 * @n: The number to print in binary format.
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		print_binary(n >> 1);
		 _putchar((n & 1) + '0');
	}
}
