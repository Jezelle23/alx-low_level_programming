#include <stdio.h>
/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 * Description: A comma followed by a space, in ascending order.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig1;
	int dig2;
	int dig3;
	int dig4;

	for (dig1 = 0; dig1 < 10; dig1++)
	{
		for (dig2 = 0; dig2 < 10; dig2++)
		{
			for (dig3 = 0; dig3 < 10; dig3++)
			{
				for (dig4 = 0; dig4 < 10; dig4++)
				{
					if (dig1 % 10  == 0 && dig2 % 10 == 0 && dig3 % 10 == 0 && dig4 % 10 == 0)
					{
						continue;
					}
					if (dig1 % 10 == 1 && dig2 % 10 ==1 && dig3 % 10 ==1 && dig4 % 10 ==1)
					{
						continue;
					}
					putchar(dig1 + '0');
					putchar(dig2 + '0');

					putchar(' ');

					putchar(dig3 + '0');
					putchar(dig4 + '0');

					if (dig1 == 9 && dig2 == 9 && dig3 == 9 && dig4 == 9)
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
