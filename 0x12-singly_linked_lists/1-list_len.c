#include <stdlib.h>
#include "lists.h"

/**
 * list_len – It tells or return the length of the number of elements in a linked list
 * @h: It is the pointer to the list_t list
 *
 * Return: Not 0 but the number of elements in the h
 */
size_t list_len(const list_t *h)
{
	size_t g = 0;

	while (h)
	{
		g++;
		h = h->next;
	}
	return (g);
}

