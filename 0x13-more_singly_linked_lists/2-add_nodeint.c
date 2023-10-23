#include "lists.h"

/**
 * add_nodeint - create new node at begin of list.
 * @head: point to the head of list
 * @n: num of element
 *
 * Return: null || te address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
