#include<stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of any given number
 * @x: The given number to be checked
 * Description: Prints the last digit of n
 * Return: The value of the last digit of the number
 */
int print_last_digit(int x)
{
	int last;

	last = x % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}

