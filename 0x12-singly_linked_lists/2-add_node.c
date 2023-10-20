#include "lists.h"
/**
 * add_node - make new_node node
 * of a sing_l list.
 * @head: head
 * @str: str save link list
 * Return: addr of head
 */

sing_l *add_node(sing_l **head, const char *str)
{
	sing_l *new_node;
	size_t new_char;

	new_node = malloc(sizeof(sing_l));
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
