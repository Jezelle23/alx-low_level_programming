#include "main.h"
/**
 * swap_int - This function swaps the values of two integers
 * @a: This is the first integer to be swapped
 * @b: This is the second integer to be swapped
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
