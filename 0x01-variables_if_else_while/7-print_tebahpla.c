#include<stdio.h>
/**
 * main - Print the letters of the aplhabet
 * Description: Letters of the alphabet displayed in lower case
 * and in reverse order
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
