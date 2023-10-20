#include "lists.h"
/**
 * add_node - make new_node node
 * of a list_t list.
 * @head: head
 * @str: str save link list
 * Return: addr of head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t new_char;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (new_char = 0; str[new_char]; new_char++)
		;

	new_node->len = new_char;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
