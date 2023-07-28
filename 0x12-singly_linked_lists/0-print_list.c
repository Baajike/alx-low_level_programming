#include <stdio.h>
#include "lists.h"

/**
 * print_list : This file is to prints all elements of a linked list
 * @h: It is the pointer to the list_t list that is to print
 * Return: Not 0 but the number of nodes that is printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}

