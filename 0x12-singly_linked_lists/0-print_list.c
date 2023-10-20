#include "lists.h"
/**
 * print_list - print element in sing_l
 * @h: link list.
 * Return: num of element
 */

size_t print_list(const sing_l *h)
{
	size_t nodee;

	nodee = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodee++;
	}
	return (nodee);
}
