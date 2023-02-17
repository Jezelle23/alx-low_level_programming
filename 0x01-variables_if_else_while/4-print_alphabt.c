#include<stdio.h>
/**
 * main - Print letters of the alphabet
 * Description: Display in lowercase except for q and e
 * Return = Alway 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}	
