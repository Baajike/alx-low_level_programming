#include "lists.h"

/**
 * sum_listint – This calculates the sum of all the data in a listint_t list
 * @head: The first node in the linked list
 *
 *
 * Return:The resulting addition of the code
 */
int sum_listint(listint_t *head)
{
	int sum_listint = 0;
	listint_t *temps = head;

	while (temps)
	{
		sum_listint += temps->n;
		temps = temps->next;
	}

	return (sum_listint);
}

