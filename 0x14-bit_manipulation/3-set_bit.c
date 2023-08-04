#include "main.h"

/**
 * set_bit - The value to set the bit to
 * which is 1
 * @n: the number to change
 * @index: The index of the bit to set to 1
 *
 * Return: 1 if success, -1 iif failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 45)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

