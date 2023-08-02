#include "lists.h"

/**
 * insert_nodeint_at_index – This inserts a new node in a linked list
 *at a new index
 * @head: This is a pointer to the first node in the list
 * @idx: Stands for index, where the new node is added
 * @n: The data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new_node;
	listint_t *temps = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (j = 0; temps && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new_node->next = temps->next;
			temps->next = new_node;
			return (new_node);
		}
		else
			temps = temps->next;
	}

	return (NULL);
}

