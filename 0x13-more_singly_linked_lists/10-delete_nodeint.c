#include "lists.h"

/**
 * delete_nodeint_at_index – This deletes a node in a
 * linked list at a certain index
 * @head: This is a pointer to the first element in the list
 * @index: This is the index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temps = *head;
	listint_t *now = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temps);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temps || !(temps->next))
			return (-1);
		temps = temps->next;
		i++;
	}

	now = temps->next;
	temps->next = now->next;
	free(now);

	return (1);
}

