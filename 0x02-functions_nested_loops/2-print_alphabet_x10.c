#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabets in lower case 10 times
 * Description: All alphabets are in lower case followed by a line
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int x = 0;

	while (x <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');

		x++;
	}
}
