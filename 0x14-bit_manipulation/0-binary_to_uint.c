#include "main.h"

/**
 * binary_to_uint - a binary number to be converted to
 * unsigned int
 * @b: The constant string containing the binary number
 *
 * Return: The number that was converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		res = 2 * res + (b[i] - '0');
	}

	return (res);
}

