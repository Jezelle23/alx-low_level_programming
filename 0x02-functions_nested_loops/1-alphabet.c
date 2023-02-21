#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabets in all lower case
 * Description: print_alphabet is a prototype to print out alphabets
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
