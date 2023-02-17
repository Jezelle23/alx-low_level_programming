#include<stdio.h>
/**
 * main - Print out base numbers
 * Description: All base numbers of sixteen in lower case
 * Return: Always0 (Success)
 */
int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
