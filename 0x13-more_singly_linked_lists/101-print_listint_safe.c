#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len – This Counts the number of unique nodes
 *
 * @head: The pointer to the head of the listint_t to check.
 *
 * Return: Only If the list is not looped, that is 0.
 * Or- the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t number_of_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				number_of_nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				number_of_nodes++;
				slow = slow->next;
			}

			return (number_of_nodes);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe – This Prints a listint_t list safely.
 * @head: This is the pointer to the head of the listint_t list.
 * Return: Not 0 but the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t number_of_nodes = 0;
	size_t index = 0;

	number_of_nodes = looped_listint_len(head);

	if (number_of_nodes == 0)
	{
		for (; head != NULL; number_of_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < number_of_nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (number_of_nodes);
}

