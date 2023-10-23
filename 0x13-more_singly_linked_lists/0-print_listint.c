#include "lists.h"

/**
 * print_listint - prints all list.
 * @h: head of list
 *
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		nnodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nnodes);
}
