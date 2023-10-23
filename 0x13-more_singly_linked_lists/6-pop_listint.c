#include "lists.h"

/**
 * pop_listint - remove the element from the list
 * @head : point to the head
 * Return: head the node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;

	if (tmp == NULL)
		return (0);

	*head = tmp->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
