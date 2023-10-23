#include "lists.h"

/**
 * free_listint2 - free the list
 * @head: point to the address of list
 *
 * Description: make the head null
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
