#include "lists.h"

/**
 * free_listint - This frees a linked list
 * @head:This is the listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temps;

	while (head)
	{
		temps = head->next;
		free(head);
		head = temps;
	}
}

