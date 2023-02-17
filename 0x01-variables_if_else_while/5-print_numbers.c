#include<stdio.h>
/**
 * main - Print out digits
 * Description: Print out all single digits of base ten starting from zero
 * followed by a new line
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		printf("%d", digit);
	}
	printf("\n");
	return (0);
}
