#include <stdio.h>
/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 * Description: A comma followed by a space, in ascending order.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;
	int digit4;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			for (digit3 = 0; digit3 < 10; digit3++)
			{
				for (digit4 = 0; digit4 < 10; digit4++)
				{
					if (digit1 == 0 && digit2 == 0 && digit3 == 0 && digit4 == 0)
					{
						continue;
					}
					putchar(digit1 + '0');
					putchar(digit2 + '0');


					putchar(' ');

					putchar(digit3 + '0');
					putchar(digit4 + '0');

					if (digit1 == 9 && digit2 == 9 && digit3 == 9 && digit4 ==9)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
