#include<stdio.h>
#include "main.h"
/**
 * _islower - Checks if the letter in the alphabet is lower case
 * Description: is c is lower case, return 1, otherwise return 0
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
