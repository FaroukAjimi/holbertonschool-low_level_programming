#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node - gooog
 *@head: gooog
 *@str:foo
 *Return: gpoo
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *k = NULL;
	size_t len = 0;

	while (str && str[len])
		len++;
	k = malloc(sizeof(*k));
	if (k)
	{
		k->str  = strdup(str);
		k->len  = len;
		k->next = *head;
		*head = k;
	}
	return (k);
}
