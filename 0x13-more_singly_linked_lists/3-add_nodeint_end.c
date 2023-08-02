#include "lists.h"

/**
 * add_nodeint_end – This adds a node at the end of a linked list
 * @head: This is the pointer to the first element in the list
 * @n: The data that is to inserted in the new element
 *
 * Return: Not 0 but the pointer to the new node, or NULL if the code fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temps = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temps->next)
		temps = temps->next;

	temps->next = new_node;

	return (new_node);
}

