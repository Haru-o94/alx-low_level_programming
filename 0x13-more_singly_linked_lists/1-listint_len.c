#include "lists.h"

/**
 * listint_len - print num of element.
 * @h: point to th head of list
 *
 * Return: num of element
 */

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
