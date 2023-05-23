#include<stdio.h>
#include "main.h"
/**
 * _isalpha - Checks the alphabetic character
 * @c: is the character of the alphabet
 * Description: checks if the alphabet is lower case or upper case
 * Return: 1 for the alphabetic character and 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
