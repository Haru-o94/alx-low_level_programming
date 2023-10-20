#include "lists.h"
/**
 * list_len - lenght
 * @h: link list
 * Return: num of element.
 */

size_t list_len(const sing_l *h)
{
	size_t nodee;

	nodee = 0;
	while (h != NULL)
	{
		h = h->next;
		nodee++;
	}
	return (nodee);
}
