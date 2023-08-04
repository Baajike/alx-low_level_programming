#include "main.h"

/**
 * get_endianness - prototype to checks if a machine
 * is little or big endian
 * Return: 0 for big endian and 1 for little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return (*c);
}

