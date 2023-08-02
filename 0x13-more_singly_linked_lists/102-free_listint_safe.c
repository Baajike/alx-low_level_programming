#include "lists.h"

/**
 * free_listint_safe – This  frees a linked list
 * @h: It is the pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t tot = 0;
	int num;
	listint_t *temps;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		num = *h - (*h)->next;
		if (num > 0)
		{
			temps = (*h)->next;
			free(*h);
			*h = temps;
			tot++;
		}
		else
		{
			free(*h);
			*h = NULL;
			tot++;
			break;
		}
	}

	*h = NULL;

	return (tot);
}

