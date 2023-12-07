#include "lists.h"

/**
 * dlistint_len - count dlistint lenght
 * @h: head of dlistint
 *
 * Return: return number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
