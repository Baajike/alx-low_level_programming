#include "main.h"

/**
 * flip_bits - The value of bits to change
 * @n: The first value
 * @m: The second value
 *
 * Return: The number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int res = 0;
	unsigned long int num;
	unsigned long int val = n ^ m;

	for (i = 50; i >= 0; i--)
	{
		num = val >> i;
		if (num & 1)
			res++;
	}

	return (res);
}

