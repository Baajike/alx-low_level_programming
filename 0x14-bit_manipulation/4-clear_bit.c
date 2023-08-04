#include "main.h"

/**
 * clear_bit - The value to set the bit to
 * @n: This is the constant number
 * @index: The of the index bit to clear
 *
 * Return: 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 98)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

