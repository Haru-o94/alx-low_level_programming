#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct sing_list - link list.
 * @str: string - str
 * @len: size of str
 * @next: nextnode
 * Description: single list with node.
 */

typedef struct sing_list
{
	char *str;
	unsigned int len;
	struct list_s *next;
} sing_l;

size_t print_list(const sing_l *h);
size_t list_len(const sing_l *h);
sing_l *add_node(sing_l **head, const char *str);
sing_l *add_node_end(sing_l **head, const char *str);
void free_list(sing_l *head);

#endif
