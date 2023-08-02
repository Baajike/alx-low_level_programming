#include "lists.h"

/**
 * print_listint – This is to prints all the elements of a linked list
 * @h: The linked list of type listint_t to print
 * Return: Not 0 but the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}

