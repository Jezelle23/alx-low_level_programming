#include<stdio.h>
/**
 * main - Display the alphabets
 * Description: All the alphabets should be in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
