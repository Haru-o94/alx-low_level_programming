#include "lists.h"

/**
 * free_list - free linked list.
 * @head: head
 * Return: -1 return
 */

void free_list(list_t *head)
{
	list_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
