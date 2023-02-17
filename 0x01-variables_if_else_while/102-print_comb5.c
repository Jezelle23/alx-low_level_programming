#include <stdio.h>
/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 * Description: A comma followed by a space, in ascending order.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			if (digit1 == 0 && digit2 == 0)
			{
				continue;
			}
			putchar(0 + '0');
			putchar(0 + '0');


			putchar(' ');

			putchar(digit1 + '0');
			putchar(digit2 + '0');

			if (digit1 == 9 && digit2 == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
