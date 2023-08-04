#include "main.h"

/**
 * get_bit - The number value in decimal number
 * @n: The number to search
 * @index: Is the index of the bit
 *
 * Return: The number value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res;

	if (index > 24)
		return (-1);

	res = (n >> index) & 1;

	return (res);
}

