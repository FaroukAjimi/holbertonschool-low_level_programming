#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t linkedlist
 * @head: pointer to head of list_t linked list
 * @str:  const string for new node
 * Return: pointer to new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *k = NULL, *c = NULL;
	size_t len = 0;

	while (str && str[len])
		len++;
	k = malloc(sizeof(*k));
	if (k)
	{
		k->str  = strdup(str);
		k->len  = len;
		k->next = NULL;
		if (!*head)
			*head = k;
		else
		{
			c = *head;
			while (c->next)
				c = c->next;
			c->next = k;
		}
	}
	return (k);
}
