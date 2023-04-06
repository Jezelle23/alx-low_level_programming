#include"main.h"
#include<stdio.h>

/**
 * get_endianness - Writes a function that checks the endianness.
 * Returns: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int jez = 1;
	char *a = (char*) &jez;
	return (int) *a;
}
