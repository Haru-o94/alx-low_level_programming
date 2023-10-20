#include "lists.h"

/**
 * free_list - free linked list.
 * @head: head
 * Return: -1 return
 */

void free_list(sing_l *head)
{
	sing_l *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
