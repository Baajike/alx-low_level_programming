#include "main.h"

/**
 * print_binary - The binary equivalent of a decimal number
 * @n: The number to binary
 *
 */
void print_binary(unsigned long int n)
{
	int num = 0;
	int i;
	unsigned long int res;

	for (i = 16; i >= 0; i--)
	{
		res = n >> i;

		if (res & 1)
		{
			_putchar('1');
			res++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}

