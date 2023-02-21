#include<stdio.h>
#include "main.h"
/**
 * main - Print out the alphabet
 * Description: print_alphabet is a prototype to print out alphabets
 * print_alphabet - prints the aplhabets in all lower case
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
