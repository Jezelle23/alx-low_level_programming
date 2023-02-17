#include<stdio.h>
/**
 * main - Print all combination of single digit numbers
 * Description: Numbers should only be printed in ascending order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 10)
			continue;
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
