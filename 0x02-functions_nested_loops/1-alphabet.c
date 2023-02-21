#include<stdio.h>
#include "main.h"
/**
 * main - Print out the alphabet
 * Description: Print the alphabet in lower case
 * print_alphabet - prints the aplhabets in all lower case
 * Return: Always 0 (Success)
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
