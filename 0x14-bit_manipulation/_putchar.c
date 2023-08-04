#include "main.h"
#include <unistd.h>
/**
 * _putchar - This writes the character c to stdout
 * @c: Simply a c program or the
 * character to print
 * Return: On success 1.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

