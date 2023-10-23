#include "lists.h"

/**
 * sum_listint - print the sum of all data
 * @head: point to the head of list
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
