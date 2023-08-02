#include "lists.h"

/**
 * pop_listint – This deletes the head node of a linked list
 * @head: This is the pointer to the first element in the linked list
 *
 * Return: Not 0 but the data inside the elements that was deleted,
 * or NULL if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temps;
	int number_of_nodes;

	if (!head || !*head)
		return (0);

	number_of_nodes = (*head)->n;
	temps = (*head)->next;
	free(*head);
	*head = temps;

	return (number_of_nodes);
}

