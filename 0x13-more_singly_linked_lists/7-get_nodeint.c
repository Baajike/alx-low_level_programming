#include "lists.h"

/**
 * get_nodeint_at_index – This returns the node at a certain index
 * in a linked list
 * @head: The first node in the linked list
 * @index: The index of the node to return
 * Return: The pointer to the node or 0 NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *temps = head;

	while (temps && p < index)
	{
		temps = temps->next;
		p++;
	}

	return (temps ? temps : NULL);
}

